import random
import pyperclip
import tkinter as tk

def copyclip():
    passwordcopy=result["text"]
    pyperclip.copy(passwordcopy)
def generate1():  
    try:
        n=int(number.get())
        password=""
        listpass=['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h','i', 'j', 'k', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z','A', 'B', 'C', 'D', 'E', 'F', 'G', 'H','I', 'J', 'K', 'M', 'N', 'O', 'p', 'Q','R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y','Z']
        for i in range(0,n):
            password+=random.choice(listpass)
        result["text"]=password
    except:
        result["text"]="Invalid Number"
def generate2():
    try:
        n=int(number.get())
        password=""
        listpass=['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h','i', 'j', 'k', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z','A', 'B', 'C', 'D', 'E', 'F', 'G', 'H','I', 'J', 'K', 'M', 'N', 'O', 'p', 'Q','R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y','Z','0','1','2','3','4', '5', '6', '7', '8', '9']
        for i in range(0,n):
            password+=random.choice(listpass)
        result["text"]=password
    except:
        result["text"]="Invalid Number"
def generate3():
    try:
        n=int(number.get())
        password=""
        listpass=['0','1','2','3','4', '5', '6', '7', '8', '9']
        for i in range(0,n):
            password+=random.choice(listpass)
        result["text"]=password
    except:
        result["text"]="Invalid Number"
def generate4():
    try:
        n=int(number.get())
        password=""
        listpass=['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h','i', 'j', 'k', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z','A', 'B', 'C', 'D', 'E', 'F', 'G', 'H','I', 'J', 'K', 'M', 'N', 'O', 'p', 'Q','R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y','Z','0','1','2','3','4', '5', '6', '7', '8', '9','@', '#', '$', '%', '=', ':', '?', '.', '/', '|', '~', '>','*', '(', ')']
        for i in range(0,n):
            password+=random.choice(listpass)
        result["text"]=password
    except:
        result["text"]="Invalid Number"
window=tk.Tk()
window.geometry("500x260") #width x height
window.grid_columnconfigure((0,1), weight=1)
window.title("Password Generator")
numberlbl=tk.Label(
    text="Enter Number of Digits - ",
    width=20,
    font=('Helvetica', 12, 'bold')
    )
number=tk.Entry(
    width=30,)
option1=tk.Button(
    text="1.Characters only",
    width=50,
    height=1,
    command=generate1,
    font=('Helvetica', 10, 'bold')
    )
option2=tk.Button(
    text="2.Characters and numbers only",
    width=50,
    height=1,
    command=generate2,
    font=('Helvetica', 10, 'bold')
    )
option3=tk.Button(
    text="3.Numbers only",
    width=50,
    height=1,
    command=generate3,
    font=('Helvetica', 10, 'bold')
    )
option4=tk.Button(
    text="4.Characters numbers and symbols",
    width=50,
    height=1,
    command=generate4,
    font=('Helvetica', 10, 'bold')
    )
texts=tk.Label(
    text="Generated Password is - ",
    height=1,
    width=20,
    font=('Helvetica', 12, 'bold')
    )
result=tk.Label(
    height=3,
    width=20,
    bg="black",
    fg="white",
    font=('Times New Roman', 12, 'italic'),
    
    )
about=tk.Label(
    text='''
    This is a password generator created by Darsh Jain. 
    Suggestions are welcome.Contact-9867476582
    ''',
    fg="grey",
    height=2,)
copy=tk.Button(
    text="Copy To Clipboard",
    width=20,
    command=copyclip,)
numberlbl.grid(row=1,column=0)
number.grid(row=1,column=1)
option1.grid(row=2,columnspan=2)
option2.grid(row=3,columnspan=2)
option3.grid(row=4,columnspan=2)
option4.grid(row=5,columnspan=2)
texts.grid(row=6,column=0)
result.grid(row=6,column=1)
copy.grid(row=7,column=1)
about.grid(row=9,columnspan=2)
window.mainloop()
