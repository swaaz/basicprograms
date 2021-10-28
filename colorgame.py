# Importing necessary packages
import random
import tkinter as tk
from tkinter import *
from tkinter import messagebox

# Declaring global variables
timeleft = 60
score = 0

#---

# Defining a function to create widgets for the game
def CreateWidgets():

    instLabel = Label(root, text = "ENTER COLOR OF THE TEXT",
                      font = ('Helvetica',30),background = 'WHITE')
    instLabel.grid(row = 0, column = 0, columnspan = 3, padx=5, pady=15)

    startButton = Button(root, text = "START GAME", width = 20,
                font = ('Helvetica',15), command = StartGame, background='WHITE')
    startButton.grid(row = 1, column = 0,padx = 5,pady = 15, columnspan = 3 )

    root.timeLabel = Label(root, text="TIME LEFT : ", font = ('Helvetica',30),
                           background='WHITE')
    root.timeLabel.grid(row=2, column=0, padx=5, pady=15)

    root.scoreLabel = Label(root, text="SCORE : "+str(score),
                            font = ('Helvetica',30),background = 'WHITE')
    root.scoreLabel.grid(row=2, column=1, padx=5, pady=15)

    root.gameLabel = Label(root, font = ('Comic Sans MS',60),background = 'WHITE')
    root.gameLabel.grid(row = 3, column = 0, padx=5, pady=15, columnspan = 2)

    root.answerEntry = Entry(root,width = 50, font =30,background = 'SILVER')
    root.answerEntry.grid(row=4, column=0, padx=5, pady=15, columnspan = 2)
    root.answerEntry.focus()

#---

# Defining function to start the game
def StartGame():
    # Calling the above declared global variables
    global timeleft, score

    # Checking if the timeleft is greater than 0. If yes do the following
    if timeleft > 0:
        # Decrementing the timeleft by 1
        timeleft -= 1
        # Displaying the time left in above created label for time left
        root.timeLabel.config(text="TIME LEFT : " + str(timeleft))

        # Creating a list of random colors
        randomColor = ['RED', 'GREEN', 'BLUE', 'VIOLET', 'PINK', 'BROWN', 'BLACK']
        # Shuffling the list
        random.shuffle(randomColor)

        # Selecting two colors from the shuffled randomColor list and setting
        # One Color as Label Text and the Other Color as Font Color of the text
        root.gameLabel.config(text=str(randomColor[0]), fg=randomColor[1])

#---

        # Check if the user's input is equal to the Font Color of the text
        if root.answerEntry.get().lower() == randomColor[1].lower():
            #If yes increment the score value by 1
            score += 1
            # Displaying the score
            root.scoreLabel.config(text = "SCORE : "+str(score))
            # Clearing the user's entry
            root.answerEntry.delete(0, END)

        # Calling the StartGame function again after 1 second
        root.timeLabel.after(1000, StartGame)

    # If timeleft is equal to 0, then stop the game and display the users's score
    else:
        messagebox.showinfo("TIME UP !","YOUR SCORE IS : "+str(score))

#---

# Creating object of tk class
root = tk.Tk()

# Setting the title and background color
# disabling the resizing property
root.title("PyColor Game")
root.configure(background = 'WHITE')
root.resizable(False, False)

# Calling the CreateWidgets() function
CreateWidgets()

# Defining infinite loop to run application
root.mainloop()
