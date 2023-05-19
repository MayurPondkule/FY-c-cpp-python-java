# 3.	Write a Python program to check the validity of a password (input from users).

# Validation : 
# •	At least 1 letter between [a-z] and 1 letter between [A-Z]. 
# •	At least 1 number between [0-9].
# •	At least 1 character from [$#@].
# •	Minimum length 6 characters.
# •	Maximum length 16 characters.

l,u,p,d=0,0,0,0
s=input("enter password:")

if(len(s) >=6 and len(s)<16):
    for i in s:
        
        if (i.islower()):
            l+=1

        if (i.isupper()):
            u+=1

        if(i.isdigit()):
            d+=1


        if(i=='@' or i=='$' or i=='#'):
            p+=1


if(l>=1 and u>=1 and p>=1 and d>=1):
    print("valid password")
else:
    print("invalid password")
