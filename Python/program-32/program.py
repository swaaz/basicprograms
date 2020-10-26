def make_readable(s):
    t = ['00','00','00']
    def c(a):
        if len(a) == 2 : return str(a)
        else: return '0'+str(a)
    
    if s < 60:
        t[2] = c(str(s))
        
    elif s >= 60 and s < 3600:
        t[1] = c(str(int(s/60)))
        t[2] = c(str(s%60))
        
    else:
        t[0] = c(str(int(s/3600)))
        t[1] = c(str(int((s%3600)/60)))
        t[2] = c(str(((s%3600)%60)))
        
    return f'{t[0]}:{t[1]}:{t[2]}'

# print(make_readable(359999)) output: 99:59:59
# print(make_readable(9678)) output: 2:41:18