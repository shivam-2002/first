a=input()
a=a.split(" ")
l=len(a)
s1=0
s2=0
for i in range(l):
    a[i]=int(a[i])
    for j in range(i+1,l):
        a[j]=int(a[j])
        if(a[i]>a[j]):
            k=a[i]
            a[i]=a[j]
            a[j]=k
    if i%2==0:
        s1=s1+a[i]
    else:
        s2=s2+a[i]
if s1>s2:
    print(s1)
else:
    print(s2)