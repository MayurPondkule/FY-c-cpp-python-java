
def count_lines():
 f = open("friends.txt")
 cnt =0
 for lines in f:
    cnt+=1
    print("no. of lines:",cnt)


    f.close()

