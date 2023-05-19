# Write a Python function that accepts a string and calculate the number of upper case letters and lower case letters. 
# Sample String : 'The quick Brow Fox'
# Expected Output : 
# No. of Upper case characters : 3
# No. of Lower case Characters : 12

l,u=0,0
s=input("enter word:")
for i in range(len(s)):
    if s[i].islower()==True:
        l+=1
    elif s[i].isupper()==True:
        u+=1
print("no. of lowercase character is ",l)
print("no. of uppercase character is ",u)