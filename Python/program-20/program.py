a,b = input().split()

a = int(a)
b = int(b)

list_1 = list(x for x in range(a+1,b+1))

for i in list_1[a:b]:
  print(i)