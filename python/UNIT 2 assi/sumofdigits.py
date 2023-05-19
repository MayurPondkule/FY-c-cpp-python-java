#Write a Python program for- Take a number from user input and find sum of digits of this number.

A=input("enter the number:\n")
sum=0
for i in range(len(A)):
    sum=sum+int(A[i])
print("sum of digit is ",sum)
