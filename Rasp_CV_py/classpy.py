def fact(n):
    if n==1:
        return 1
    else:
        return n*fact(n-1)

n=int(input('enter a number'))
if n<0:
    print('enter a positive no')
            
elif n==0:
    print('factorial is 1')
else:
    print('factorial is ',fact(n))
    
n = int(input("How many terms you wants to print? "))
n1, n2 = 0, 1
count = 0
if n <= 0:
   print('enter positive integer')
elif n == 1:
   print("Fibonacci upto",n,":")
   print(n1)
else:
   print("sequence:")
   while count < n:
       print(n1)
       nth = n1 + n2
       n1 = n2
       n2 = nth
       count += 1

a=lambda a:a**2
n=int(input('enetr a no'))
print(a(n))

xyz=lambda x,y,z:x*y+z
n1=int(input('enetr x no'))
n2=int(input('enetr y no'))
n3=int(input('enetr z no'))
print(xyz(n1,n2,n3))

xyz=lambda x,y,z:x**2+y*z
n1=int(input('enetr x no'))
n2=int(input('enetr y no'))
n3=int(input('enetr z no'))
print(xyz(n1,n2,n3))

xyz=lambda x,y,z:x+y+z*w**2
n1=int(input('enetr x no'))
n2=int(input('enetr y no'))
n3=int(input('enetr z no'))
n4=int(input('enetr w no'))
print(xyz(n1,n2,n3,n4))

