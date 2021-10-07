import random
from IPython.display import clear_output

def display_board(mark):
    print('----------------------------')
    print('|' + '        ' + '|'  + '        ' + '|' + '        '+ '|' )
    print('|' + '   ' + mark[7]+ '    '  + '    ' + mark[8]+ '    ' +    '     ' +mark[9]+ '   '+ '|' )
    print('|' + '        ' + '|'  + '        ' + '|' + '        '+ '|' )
    print('----------------------------')
    print('|' + '        ' + '|'  + '        ' + '|' + '        '+ '|' )
    print('|' + '   ' + mark[4]+ '    '  + '    ' + mark[5]+ '    ' +    '     ' + mark[6]+ '   ' + '|')
    print('|' + '        ' + '|'  + '        ' + '|' + '        '+ '|' )
    print('----------------------------')
    print('|' + '        ' + '|'  + '        ' + '|' + '        '+ '|' )
    print('|' + '   ' + mark[1]+ '    '  + '    ' + mark[2]+ '    ' +    '     ' + mark[3]+ '   ' + '|')
    print('|' + '        ' + '|'  + '        ' + '|' + '        '+ '|' )
    print('----------------------------')
def player_input():
    player1= input("Choose- X or O? ")
    
    while player1 not in ["X","O"]:
        player1 = input("Choose again : ")
        print ("You're:", player1)
    if player1 == "X":
        player2 = "O"
    else:
        player2 = "X"

def place_marker(mark, player, place):
    if place in range(1,10):
        mark[place] = player
def win_check(mark, val):
    combo = [''.join(mark[1:4]), ''.join(mark[4:7]), ''.join(mark[7:10]), ''.join(mark[1:10:3]), 
                        ''.join(mark[2:10:3]),  ''.join(mark[3:10:3]), ''.join(mark[1:10:4]), ''.join(mark[3:8:2])]
    check = []
    for item in combo:
        check.append(val*3 in item)

    return sum(check) >0

def choose_first():
    first = random.randint(1,1000)
    if  first in range(1,500):
        print("Player X is first")
    else:
        print("Player O is first")
    return first

def space_check(mark, place):
    if mark[place] == ' ':
        return True
def full_board_check(mark):
    if ' ' not in mark:
        return True
def player_choice(mark):
    choice = 0
    
    choice = int(input("Choose a position on board (1 to 9): "))
    
    while choice not in [1,2,3,4,5,6,7,8,9] or not space_check(mark,choice):
              choice = int(input("Choose again (1 to 9): "))
    
    return choice
def replay():
    Ask = input("Do you want to play  (Yes/No)?")
    if Ask not in ['Yes','No']:
        Ask = input("Choose again (Yes/No)?")
    elif Ask=="Yes":
        return True
    else:
        return False
  
  
print("Hi")
print('This is a Tic Tac Toe game')
Player = replay()
while Player:
    
    test_board = ['#',' ',' ',' ',' ',' ',' ',' ',' ',' ']
    player_input()
    first  = choose_first() 
    if first in range(1,500):
        P1 = 'X'
        P2 = 'O'
    else:
        P1 = 'O'
        P2 = 'X'
    
    Ask = input("Ready?-Yes or No ")
    
    while Ask not in ['Yes','No']:
        Ask = input("Ready?- Yes or No ")
    if Ask== "No":
        break
    
    while True:
        clear_output()
        display_board(test_board)
        choice = player_choice(test_board)
        place_marker(test_board,P1, choice)
        clear_output()
        if win_check(test_board, P1):
            print ("Congratulations! {} has won!".format(P1))
            print("Game over")
            display_board(test_board)
            break
        elif full_board_check(test_board):
            print ("Game over")
            print("Nobody has won. You may try again.")
            display_board(test_board)
            break

        clear_output()
        display_board(test_board)
        choice = player_choice(test_board)
        place_marker(test_board,P2, choice)
        if win_check(test_board, P2):
            print ("Congratulations! {} has won!".format(P2))
            print("Game over")
            display_board(test_board)
            break
        elif full_board_check(test_board):
            print("Game over")
            print("Nobody has won. You may try again.")
            display_board(test_board)
            break
    ask = input("Do you want to play again?")
    if  ask == "No":
        break
    elif ask=="Yes":
        Player=True
