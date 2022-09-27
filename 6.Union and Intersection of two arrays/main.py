def union(list):
    uniques=[]
    for i in list:
        if i not in uniques:
            uniques.append(i)
    for i in uniques:
        print(i,end=" ")

def complement( l1,l2):
    complements= []
    for i in l1:
        if i in l2:
            complements.append(i)
    for i in complements:
        print(i,end=" ")


l1 = [1,2,3,4,5,6]
l2 = [7,8,9,1,2,3]


union(l1+l2)
print(" ")
complement(l1,l2)


