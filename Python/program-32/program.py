# Made by Nitin Kumar
# on 15th September 2020
# using purely python language
# and list 'data structure' type
# comments are added for clear understanding of every code used
# open source for learning


# -----------------------------DATA STRUCTURE IN PYTHON USING LIST----------------------------------------


# declaring & initializing list named 'tree'
tree=[]

# option by default 'y'
ans = 'Y'

# loop to constantly ask what to do
while ans == 'Y' or ans == 'y':

    # FUNCTION USED IN THIS DATA STRUCTURE
    
    # function to insert multiple items in lists
    def insert_items():
        nol = int(input("Enter the number of items to fill in the tree:\t"))
        for i in range(0,nol):
            i = int(input("Enter the items:\t"))
            tree.append(i)

    # function to display items in the list
    def display_items():
        if tree == []:
            print("You haven't added any item !!")
        else:
            print("The tree made is",tree)

    # funtion to add one item to the list
    def add_item():
        index = int(input("Enter the index of element after which you want to add item:\t"))
        item = int(input("Enter the value:\t"))
        tree.insert(index,item)

    # function to delete item in list

    # function to delete item when value of item to be deleted is known
    def delete_item_value():
        value = int(input("Enter the value of element which you want to delete:\t"))
        tree.remove(value)
        
    # function to delete item when index of item to be deleted is known
    def delete_item_index():
        index = int(input("Enter the index of element which you want to delete:\t"))
        tree.pop(index)

    # MAIN THING TO BE DISPLAYED EVERYTIME YOU TYPE 'Y' OR 'y' TO DO TASKS INSIDE THE TREE
    
    # 1. ADD MULTIPLE ITEMS IN TREE
    # 2. DISPLAY ITEMS
    # 3. ADD ONE ITEM ONLY
    # 4. DELETE ITEM IF
    #    41. VALUE OF ITEM TO BE DELETED IS KNOWN
    #    42. INDEX OF ITEM TO BE DELETED IS KNOWN
    # 5. EXIT
    
    try:
        print("\n\n========================================")
        option = int(input("What do you want to do ? \n1. Add multiple items\n2. Display items\n3. Add one item\n4. Delete item when\n\t 41. You know the value of item\n\t 42. You know the index of item\n5. Exit\n\nYOUR ANSWER HERE\t"))
        print("========================================\n\n")

        # CONDITIONS TO BE FOLLOWED FOR SUCCESSFUL EXECUTION
    
        if option == 1:
            insert_items()
        elif option == 2:
            display_items()
        elif option == 3:
            add_item()
        elif option == 41:
            delete_item_value()
        elif option == 42:
            delete_item_index()
        elif option == 5:
            exit()
        else:
            print("Invalid option selected , Try again !!")
            
    except:
        print("Please choose number from 1 to 5")
    

    #Question asked for next iteration
    ans = input("Do you want to continue ? ( type 'Y' or 'y' to continue )\t")
