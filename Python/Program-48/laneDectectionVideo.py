import cv2
import numpy as np
from matplotlib import pyplot as plt
import math

def regionOfInterest(image): 
    
    height = image.shape[0] 
    width = image.shape[1]
    polygons = np.array([[(int(width/6), height), (int(width/2.5), int(height/1.45)), (int(width/1.9), int(height/1.45)), (int(width/1.3), height)]])

    # create zero array size of img
    zeroMask = np.zeros_like(image)

    # fill polygon with ones
    cv2.fillConvexPoly(zeroMask, polygons, 1)

    # mask our original image to create roi
    roi = cv2.bitwise_and(image, image, mask = zeroMask)
    
    return roi

def getLineCoordinates(frame, lines):
    height = int(frame.shape[0]/1.5)
    slope, yIntercept = lines[0], lines[1]

    # get 1st bottom y coordinate
    y1 = frame.shape[0]

    # get 2nd top y coordinate
    y2 = int(y1-110)

    # first x coordinate, solving for x in y = mx+b
    x1 = int((y1-yIntercept)/slope)

    # seceond x coordinate, solving for x in y = mx+b
    x2 = int((y2-yIntercept)/slope)

    return np.array([x1,y1,x2,y2])


# average out lines from hough transformation
def getLines(frame, lines):
    copyImage = frame.copy()
    leftLine, rightLine = [], []
    roiHeight = int(frame.shape[0]/1.5)
    lineFrame = np.zeros_like(frame)
    for line in lines: 
        x1, y1, x2, y2 = line[0]
        # calculate slope & y intercept
        lineData = np.polyfit((x1,x2), (y1,y2), 1)
        slope, yIntercept = round(lineData[0], 8), lineData[1]
        if slope < 0: 
            leftLine.append((slope, yIntercept))
        else:
            rightLine.append((slope, yIntercept))

    # convert back into [x1,y1,x2,y2] format
    if leftLine:
        leftLineAverage = np.average(leftLine, axis = 0)
        left = getLineCoordinates(frame, leftLineAverage)
        try:
            cv2.line(lineFrame, (left[0],left[1]), (left[2],left[3]), (255, 0, 0), 2)
        except Exception as e: 
            print('Error', e)
    if rightLine:
        rightLineAverage = np.average(rightLine, axis = 0) 
        right = getLineCoordinates(frame, rightLineAverage)
        try:
            cv2.line(lineFrame, (right[0],right[1]), (right[2],right[3]), (255, 0, 0), 2)
        except Exception as e: 
            print('Error:', e)

    # return copyImage with lines weighted for transparency
    return cv2.addWeighted(copyImage, 0.8, lineFrame, 0.8, 0.0)

# save finalized video
fourcc = cv2.VideoWriter_fourcc('m', 'p', '4', 'v')
out = cv2.VideoWriter('media/output.mp4', fourcc, 20.0, (640,360))

vid = cv2.VideoCapture('media/carDashCam.mp4')
count = 0
while (vid.isOpened()):
    ret,frame = vid.read()
    cv2.imshow("original frame", frame)

    # 1. convert to grayscale
    grayFrame = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
    
    # 2. gaussian blur the grayscale frame to reduce noise, kernal size must be positive & odd
    kernel_size = 1
    gaussianFrame = cv2.GaussianBlur(grayFrame,(kernel_size,kernel_size),kernel_size)
    cv2.imshow('gaussianFrame', gaussianFrame)

    # 3. detect edges using canny edge detection
    low_threshold = 75
    high_threshold = 160
    edgeFrame = cv2.Canny(gaussianFrame, low_threshold, high_threshold)

    # 4. define region of interest
    roiFrame = regionOfInterest(edgeFrame)

    # 5. detect lines using hough's algorithm
    lines = cv2.HoughLinesP(roiFrame, rho=1, theta=np.pi/180, threshold=20, lines = np.array([]), minLineLength=10, maxLineGap=180)

    # 6. draw lines onto frame
    # version 1: without averaging lines
    # copyImage = frame.copy()
    # for line in lines: 
    #     x1, y1, x2, y2 = line[0]
    #     cv2.line(copyImage, (x1,y1), (x2,y2), (255, 0, 0), 2)
    # cv2.imshow("final", copyImage)

    # version 2: with averaging lines
    imageWithLines = getLines(frame, lines)
    cv2.imshow("final", imageWithLines)

    # Optional: if you want to save individual final frames
    # cv2.imwrite("frame%d.jpg" % count, imageWithLines)     # save frame as JPEG file  
    # count += 1

    # save frame final video output
    out.write(imageWithLines)

    if cv2.waitKey(10) & 0xFF == ord('q'):
        break

vid.release()
out.release()
cv2.destroyAllWindows()