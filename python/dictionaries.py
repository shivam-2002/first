purse=dict()# Lists index their entries based on the position in the list
#Dictionaries arel like bags no order
#So we 
purse['money']=12# Dictionaries are like lists except that they use keys instead of numbers to look up values

purse['candy']=3
purse['tissue']=75
print(purse)

ddd=dict()
ddd['age']=21
ddd['course']=183
print(ddd)
ddd['age']=32
print(ddd)

ddd['age']=ddd['age']+3
print(ddd)
print('Rahule' in ddd)

counts=dict()
names=['csevv','cwen','csev','zquian','cwen']
for name in names:
    if name not in counts:
        counts[name]=1#assigning value to each key of dictionary
    else:
        counts[name]=counts[name]+1 # incrementing value of key
print(counts)

counts=dict()
names=['csev','cwen','csev','zqian','cwen']
for name in names:
    counts[name]=counts.get(name,0)+1
print(counts)
print(counts.keys())
print(counts.values())
print(counts.items())
for aaa,bbb in counts.items():
    print(aaa,bbb)


bigcount=None
bigword=None
for word,count in counts.items():
    if bigcount is None or count>bigcount:
        bigword=word
        bigcount=count

print(bigcount,bigword)

t=sorted(counts.items())
print(t)