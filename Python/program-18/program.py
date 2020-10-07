
year =  int( input('Enter Year: '))

if (year%4) and (year%100) and (year%400)  == 0:
    print('Leap year')
else:
    print('Not leap year')
