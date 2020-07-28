fruit="Banana"
print(len(fruit))
print(fruit[1])
for i in range(len(fruit)):
    print(i," ",fruit[i])
for letters in fruit:
    print(letters)
print(fruit[0:4:2])
print(fruit[2:200])
print(fruit[:3])
print(fruit[2:])
a="Hello"
b="There" +a 
print(b)
print('n' in fruit)
print(a<b)
x='nan' in fruit
print(x)
print(a==b)
print(a<b)
print('a'<"A")
greet="Hello Bob"
zap=greet.lower()
print(zap)
print(greet)
print("Hi There".lower())
print(type(greet))
dir(greet)
fruit="banana"
pos=fruit.find('na')
print(pos)
print(fruit.upper())
nstr=greet.replace('Bob','Jane')
print(nstr)
greet='      Hello Bob     '
greet=greet.rstrip()
print(greet)
greet=greet.lstrip()
print(greet)
line='Please have a nice day'
print(line.startswith('Please'))
print(line.startswith('p'))
