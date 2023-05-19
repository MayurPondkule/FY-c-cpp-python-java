# 5.	Write a Python program to create a lambda function that adds 15 to a given number passed in as an argument,
#  also create a lambda function that multiplies argument x with 
# argument y and print the result.

a=lambda x:x+15
m=lambda x,y:x*y
x=int(input("enter  the no. for multiply"))
y=int(input("enter the 2nd number"))
print(m(x,y))
k=x=int(input("enter the no. for add"))
print(a(k))