num=int(input("enter value to find factorial:"))
def fact_for(number):
    fact=1
fact=1
if num==0:
    print("factorial of zero is 1")
elif num<0:
    print("factorial of negative  number does not exist")
else:
    for i in range(1,num+1):
      fact=fact*i
    print("factorial of given number using fact_for=",fact)






    