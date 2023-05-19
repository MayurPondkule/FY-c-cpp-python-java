# You can also nest a loop inside another. 
# You can put a for loop inside a while, or a while inside a for, or a for inside a for, or a while 
# inside a while.
# Or you can put a loop inside a loop . You can go as far as you want


for i in range(1,6):         #outerloop
    for j in range(i):       #innerloop
        print("*",end=" ")      #prints * on same line for j no of times


    print()                       #print on new line for i number of times