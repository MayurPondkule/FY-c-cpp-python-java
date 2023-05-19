# for x in range(1,10,2):
#     print(x,end=" ")



# list=["mikasa","eren","armin","levi","mayur"]

# for a in list:
#     print(a)



# list1=[["mikasa",2],["eren",3],["armin",4],["levi",6],["mayur",6]]


# dict1=dict(list1)
# print(dict1)

# # for items in dict1:
# #     print(items)
# # orrrrrrrrrrrrrrrrrrr
# for a in dict1.items():
#     print(a)

# for a,b in list1:
#     print(a,"and cake eat is",b)



    #else statement for for loop

# add=0
# for n in range(1,11):
#     add+=n                                 #add=add+n
# else:
#     print("sum=",add)




# if in for loop


# list=[1,2,25,4,3,2,3,31,4,2,3,3,66]

# for items in list:
#     if(items>40):
#         print(items)
        
    


list2=["mayur","mikasa",1,2,25,4,3,2,3,31,4,2,3,3,66]

for items in list2:
    if str(items).isnumeric()and items>40:
        print(items)
