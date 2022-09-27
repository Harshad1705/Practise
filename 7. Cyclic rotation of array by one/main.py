l =[1,2,3,4,5]

last =l[len(l)-1]

temp=l[0]
for i in range(len(l)-1):
    k=l[i+1]
    l[i+1]=temp
    temp=k
    
l[0]=last

print(l)