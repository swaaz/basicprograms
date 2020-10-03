arr=[1,3,5,9,12,34,56,61,65,75,78,79,89]
#arr represents the list to search an element
n=int(input("enter number to search"))
# n is input
for i in arr:
    if (i==n):
        #comparison of input to the list
        print("number is found in the list")
        break

else:
    print("number not found")
