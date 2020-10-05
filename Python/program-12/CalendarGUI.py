import tkinter as tk
from tkinter import ttk
from tkcalendar import Calendar
import datetime
def generate():
    current= datetime.datetime.now()  #System Date Handle to current variable
    calwindow=tk.Toplevel(window)
    cal=Calendar(calwindow,
    font="Arial 12",
    selectmode="day",
    year=current.year,
    month=current.month,
    day=current.day,
    background='blue',
    foreground='white',
    )
    buttonok=tk.Button(
        calwindow,
        text="Close",
        command=calwindow.quit,
    )
    cal.pack()
    buttonok.pack()
    

window=tk.Tk()
window.title("Calendar")
window.geometry("300x150")

calendarbutton=tk.Button(
    text="Generate Calendar",
    font=('Helvetica', 12, 'bold'),
    width=20,
    command=generate,)
about=tk.Label(
    text='''
    This is a Calendar Generator created by Darsh Jain. 
    Press Generate Calendar.
    ''',
    fg="grey",
    font="Arial 8",
    height=3,)

calendarbutton.pack(expand=True)
about.pack(expand=True)
window.mainloop()
