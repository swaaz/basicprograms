    # defining a function to calculate LCM  
def calculate_lcm(x, y):  
        # selecting the greater number  
    if x > y:  
          greater = x  
    else:  
          greater = y  
    while(True):  
        if((greater % x == 0) and (greater % y == 0)):  
            lcm = greater  
            break  
        greater += 1  
    return lcm    
      
  # taking input from users  
num1 = int(input("Enter first number: "))  
num2 = int(input("Enter second number: "))  
    # printing the result for the users  
print("The L.C.M. of", num1,"and", num2,"is", calculate_lcm(num1, num2))  