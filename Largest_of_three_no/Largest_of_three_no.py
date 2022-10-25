def Largest_of_three_no(a,b,c):
    if(a>b)and(a>c):
        return a
    elif(b>a)and(b>c):
        return b
    elif(c>a)and(c>b):
        return c
    else:
        return ("numbers are equal")

print(Largest_of_three_no(1,2,3))
