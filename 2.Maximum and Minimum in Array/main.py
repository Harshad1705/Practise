arr = [0,99,55,12,66,102,5]
max=arr[0]
min=arr[0]
for i in arr:
    if(i>max):
        max=i
print("Maximun : "+ str(max))
for i in arr:
    if(i<min):
        min=i
print("Minimun : "+ str(min))