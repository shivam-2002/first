#List constants are surrounded by square brackets and the elements in the list are separated by commas
# A list element can be any Python object-even another list
# Al list can be empty
# List are mutable
# Range function returns a list
print([1,23,64])
a=['red','blue','green',[2]]
print(type(a))
b=[2,4,5,[1,2,3,4,5]]
print(type(b))
print(type(b[3]))
print(type(b[0]))
print(b[2:5])
b[1]="Banana"#List are mutable
print(b)
print(len(b))#length
for i in range(5):
    print(i)
print(range(5))
b=b+a #Concanating of List
print(b)
t=b[2:4] #Slicing
print(t)
x=list()
print(type(x))
x.append("Book")
x.append("99")
x.append(67)
print(x)
print(len(x))
print(type(x))
print(20 not in x)
#x.sort()
print(x)
x=[1,2,5,3,4]
x.sort()
print(x)


a="Hello Shivam Rahul Kumar"
list1=a.split()
print(list1)
b="Hello;Shivam;Rahul;Deepa;Sumit"
list2=b.split(";")
print(list2)
