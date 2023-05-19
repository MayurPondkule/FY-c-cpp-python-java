year = int(input("Enter a year: ")) 
if (year % 4) == 0: 
    if (year % 100) == 0: 
        if (year % 400) == 0: 
            print(year, " is a leap year" )
        else: 
            print(year, " is not a leap year") 
    else: 
        print(year, " is a leap year" ) 
else: 
    print(year, " is not a leap year") 



num1 = int(input('Enter First: '))
num2 = int(input('Enter Second: '))
num3 = int(input('Enter Third: '))
if num1>num2:
  if num1>num3:
    print("Largest is",num1)
  else:
    print("Largest is",num3)
else:
   if num2>num3:
      print("Largest is",num2)
   else:
      print("Largest is",num3)