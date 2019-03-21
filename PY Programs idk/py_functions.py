#python function
#syntax--->def <function_name> (<parameterlist>):
def func():
    #this is functionblockc
    print('basic function')
    z=99
    print(z)
    #the tab marks the function block no fukig curly brackets any more yay
#now i am out of the function block

#run the above program noughthing will happne
#becaous it was just the defination 
#to run it you can just
func()
#or you can call it directly in the live shell

#now functions wiith parameters

def addion(num1,num2):
    ans=num1+num2
    print('num1 is ',num1)
    print('num2 is ',num2)
    print(ans)

addion(28,39)
#that works
addion(num2=4,num1=99)
#this also works

#defalur functions parameters
def add(num1,num2=66):
    ans=num1+num2
    print('num1 is ',num1)
    print('num2 is ',num2)
    print(ans)
    
add(28)
add(1234,3456)
    
