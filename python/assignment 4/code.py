f=open("city.txt","w")

f.write("My city is clean city.")

f.close()

f=open("city.txt","r")

dt=f.read()

print(dt)


f.close()