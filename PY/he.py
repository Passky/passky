import numpy
st=input()
sp1=list(map(int,input().split()))
c=int(numpy.mean(sp1))
x=0
for i in range(int(st)-1):
    z=sp1[i]-c
    if z!=0:
        sp1[i+1]+=z
        x+=1
print(x)
