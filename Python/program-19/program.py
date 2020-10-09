a = int(input())
count = 0
list_1 = [i for i in range(1, 51)]

for i in list_1:
  if i != a:
    if i%a == 0:
      count+=1
    
print(count,end='')