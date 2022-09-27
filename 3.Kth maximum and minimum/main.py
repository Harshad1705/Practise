l = [4,5,8,3,1,9,7]
k = 5

print("List : "+str(l))
l.sort()
print("Sorted list :"+str(l))

def func(l):
    maximum = max(l)
    l.remove(maximum)

for i in range(0,k-1):
    func(l)

print(str(k)+"maximum elemnent :"+str(max(l)))
print(str(k)+"minimum elemnent :"+str(min(l)))

