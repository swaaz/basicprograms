# Reversing a list using python

#Method-01:

def Reverse(lst):
    return [ele for ele in reversed(lst)]
      
# Driver Code
lst = [10, 11, 12, 13, 14, 15]
print(Reverse(lst))


#Method-02:

def Reverse(lst):
    lst.reverse()
    return lst
      
lst = [10, 11, 12, 13, 14, 15]
print(Reverse(lst))


#Method-03:

def Reverse(lst):
    new_lst = lst[::-1]
    return new_lst
      
lst = [10, 11, 12, 13, 14, 15]
print(Reverse(lst))

#end
