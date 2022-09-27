from numpy import append


l = [-1,2,-3,5,6,8,-8,-5]
l_neg=[]
l_pos=[]
for i in l:
    if(i<0):
        l_neg.append(i)
    else:
        l_pos.append(i)

l = l_pos+l_neg

print(l)