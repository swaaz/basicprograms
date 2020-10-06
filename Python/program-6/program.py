n=int(input("enter any number"))
# n is the number to check whether it is prime or not
if n>1:
    # loop from 2 to n/2
    for i in range(2,int(n/2)):

        if(n%i)==0:
            #if n is completly divisible by i then it is not a prime number
            print("n is not prime")
            break
    else:
        print("n is prime")
else:
    print("not prime")
