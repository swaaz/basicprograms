# PYTHON GUI TO CONVERT AMOUNT USER-INPUT FROM SELECTED CURRENCY VALUE TO SELECTED CURRENCY
# BASED ON REAL-TIME CURRECNY RATES
#
# GET YOUR FREE API KEY FROM : https://www.alphavantage.co

# Importing necessary packages
import json
import requests
import tkinter as tk
from tkinter import *

# Making a list of currencies. You can add more items (currencies) to the list
currencyList = ['US', 'INR', 'USD', 'AED', 'AUD', 'BHD', 'BRL', 'CAD', 'CNY', 'EUR', 'HKD','NRS' ]

# Defining CreateWidgets() to create necessary widgets for the GUI
def CreateWidgets():
    inputAMT_Label = Label(root, text="ENTER AMOUNT TO CONVERT : ", bg="deepskyblue4")
    inputAMT_Label.grid(row=1, column=0, padx=5, pady=5, columnspan=2)
    inputAMT_Entry = Entry(root, width=14, textvariable=getAMT, bg="snow3",
                           font=('',20), justify="center")
    inputAMT_Entry.grid(row=1, column=2, padx=5, pady=5)

    fromLabel = Label(root, text="FROM : ", bg="deepskyblue4")
    fromLabel.grid(row=2, column=0, padx=5, pady=5)
    root.fromList = Listbox(root, width=20, height=len(currencyList), exportselection=False,
                            bg="snow3")
    root.fromList.grid(row=3, column=0, columnspan=2, padx = 5, pady = 5)

    # Populating the ListBox with the currencies values from currencyList
    for c in range(len(currencyList)):
        root.fromList.insert(c, currencyList[c])
    # Binding onFromCurrencySelect() event to the ListBox Widget
    root.fromList.bind('<<ListboxSelect>>', onFromCurrencySelect)

    toLabel = Label(root, text="TO : ", bg="deepskyblue4")
    toLabel.grid(row=2, column=2, padx=5, pady=5)
    root.toList = Listbox(root, width=20, height=len(currencyList), exportselection=False,
                          bg="snow3")
    root.toList.grid(row=3, column=2, columnspan=2, padx=5, pady=5)

    # Populating the ListBox with the currencies values from currencyList
    for c in range(len(currencyList)):
        root.toList.insert(c, currencyList[c])
    # Binding onToCurrencySelect() event to the ListBox Widget
    root.toList.bind('<<ListboxSelect>>', onToCurrencySelect)

    convertButton = Button(root, text="CONVERT", width=25, command=Convert)
    convertButton.grid(row=4, column=0, columnspan=3, padx=5, pady=5)

    exrateLabel = Label(root, text="EXCHANGE RATE : ",bg="deepskyblue4")
    exrateLabel.grid(row=5, column=0, padx=5, pady=5, columnspan=2)
    root.exrate = Label(root, width=14, font=('',20), bg='snow3',  justify="center")
    root.exrate.grid(row=5, column=2, padx=5, pady=5)

    outputLabel = Label(root, text="CONVERTED AMOUNT:", bg="deepskyblue4")
    outputLabel.grid(row=6, column=0,padx=5, pady=5, columnspan=2)
    root.outputAMT = Label(root, width=14, font=('',20), bg="snow3", justify="center")
    root.outputAMT.grid(row=6, column=2, padx=5, pady=5, columnspan=2)

# Defining onFromCurrencySelect() to fetch the currency selected from the ListBox
# and store it fromCurrecny variable
def onFromCurrencySelect(evt):
    fromCurrencySelection = root.fromList.get(root.fromList.curselection())
    fromCurrency.set(fromCurrencySelection)

# Defining onToCurrencySelect() to fetch the currency selected from the ListBox
# and store it toCurrency variable
def onToCurrencySelect(evt):
    toCurrencySelection = root.toList.get(root.toList.curselection())
    toCurrency.set(toCurrencySelection)

# Defining Convert() function for converting the curreny
def Convert():
    # Fetching & storing user-inputs in resepective variables
    # Converting user-input amount which is a string into float type
    inputAmt = float(getAMT.get())
    f_Currency = fromCurrency.get()
    t_Currency = toCurrency.get()

    # Storing the API Key from https://www.alphavantage.co/
    apiKey = "YOUR API KEY"
    # Storing the base URL
    baseURL = r"https://www.alphavantage.co/query?function=CURRENCY_EXCHANGE_RATE"
    # Storing the complete URL
    inputURL = baseURL+"&from_currency="+f_Currency+"&to_currency="+t_Currency+"&apikey="+apiKey

    # Sending the request to URL & Fetching and Storing the response in response variable
    response = requests.get(inputURL)
    # Returning the JSON object of the response and storing it in result
    result = response.json()
    print(json.dumps(result, indent=2))

    # Getting the exchange rate (Required Information)
    exchangeRate = float(result["Realtime Currency Exchange Rate"]['5. Exchange Rate'])

    # Displaying exchange rate in respective label after rounding to 2 decimal places
    root.exrate.config(text=str(round(exchangeRate, 2)))

    # Calculating the converted amount and rounding the decimal to 2 places
    calculateAmt = round(inputAmt * exchangeRate, 2)
    # Displaying the converted amount in the respective label
    root.outputAMT.config(text=str(calculateAmt))

# Creating object of tk class
root = tk.Tk()

# Setting title, background color & size of tkinter window
# & disabling the resizing property
root.geometry("450x400")
root.resizable(False, False)
root.title("PythonCurrenyConverter")
root.config(bg = "deepskyblue4")

# Creating tkinter variables
getAMT = StringVar()
fromCurrency = StringVar()
toCurrency = StringVar()

# Calling the CreateWidgets() function
CreateWidgets()

# Defining infinite loop to run application
root.mainloop()