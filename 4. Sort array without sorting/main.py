l =[0,1,0,1,2,0,2,0,1,0]

zero = l.count(0)
one = l.count(1)
two = l.count(2)

for i in range(0,zero):
    l[i]=0

for i in range(0,one):
    l[i+zero]=1

for i in range(0,two):
    l[i+zero+one]=2

for i in l:
    print(i,end=" ")
