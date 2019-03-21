#ooooooooooooooooooooooooooooookey ladunduss
#variables reeeech
x=6
#not a global varible


def eg():
    print(x)
    print(x+99)


eg()

#now look this gives error if you remove # from function block

def eg2():
    print(x)
    print(x+99)
   # x+=6
    print(x)
    
eg2()

#to over come that
#defing x as globel
# as "global x" in thee function block

def eg3():
    global x
    #now x is global
    print(x)
    print(x+99)
    x+=6
    print(x)
    
eg3()
#other ways to do it

def eg3():
    y=x
    print(y)
    print(y+99)
    y+=6
    print(y)
    #but now y is an local variabel and cannot be used outside the function block
    
eg3()
#print(y)
#NameError: name 'y' is not defined
#if you wanted to use the y value outside the function
#you can return y value from the funcion block
#like this

def eg4():
    y=x
    print(y)
    print(y+99)
    y+=6
    print(y)
    return y

r=eg4()
#and use r insted
print(r)
