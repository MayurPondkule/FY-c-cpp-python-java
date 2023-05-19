# Write a Python program to create a function
# that takes one argument, and that argument will be multiplied with an unknown given number. Sample Output:
# Double the number of 15 = 30
# Triple the number of 15 = 45
# Quadruple the number of 15 = 60
# Quintuple the number 15 = 75

number=int(input("enter number:"))
Double= lambda x:x*x
print("double the number of",number,"is" ,Double(number))
Triple= lambda x:x*x*x
print("triple the number of",number,"is" ,Triple(number))
Quadruple= lambda x:x*x*x*x
print("Quadruple the number of",number,"is" ,Quadruple(number))
Quintuple= lambda x:x*x*x*x*x
print("Quintuple the number of",number,"is" ,Quintuple(number))