#WAP TO REVERSING A LIST IN PYTHON

#METHOD-01:

# Reversing a list using reversed()
def Reverse(lst):
    return [ele for ele in reversed(lst)]
      
# Driver Code
lst = [10, 11, 12, 13, 14, 15]
print(Reverse(lst))


#METHOD-02:

# Reversing a list using reverse()
def Reverse(lst):
    lst.reverse()
    return lst
      
lst = [10, 11, 12, 13, 14, 15]
print(Reverse(lst))


METHOD-03:

# Reversing a list using slicing technique
def Reverse(lst):
    new_lst = lst[::-1]
    return new_lst
      
lst = [10, 11, 12, 13, 14, 15]
print(Reverse(lst))


#END
