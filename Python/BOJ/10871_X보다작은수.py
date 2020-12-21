a,b=map(int,input().split())
x=list(range(a))
x=input().split()
for i in range(a):
    x[i]=int(x[i])
    if(x[i]<b):
        print(x[i],end=" ")