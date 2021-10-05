rows = int(input("Enter Same Number Rows & Columns Square Pattern Rows = "))

print("===Printing Same Number in Rows and Columns of a Square Pattern===")

for i in range(1, rows + 1):
    for j in range(i, rows + 1):
        print(j, end = ' ')
    for k in range(1, i):
        print(k, end = ' ')
    print()