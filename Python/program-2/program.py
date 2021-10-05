fact=int(input("input any number"))
# input any number
factorial = 1
#predefined factorial of 0
if fact < 0:
    print("factorial is not possible")
elif fact == 0:
    print("factorial of "+str(fact) +" is "+str(factorial))
else:
    fact1=fact
    while(fact>2):
        fact-=1
        fact1=fact1*(fact)
    print("factorial is "+ str(fact1))