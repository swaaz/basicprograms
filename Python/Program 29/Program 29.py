n = int(input("Enter how many numbers you want in the series: "))
first = 0
second = 1
for i in range(n):
    print(first)
    temp = first
    first = second
    second = temp + second