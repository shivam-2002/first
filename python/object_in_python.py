class A:
    def function(self):
        print("This is class method")
        return

obj=A()
obj.function()



class C:
    def init(self,length,breadth):
        self.length=length
        self.breadth=breadth
    def getarea(self):
        print("Area of Rectange is: ",self.length*self.breadth)


p=C()
p.init(3,5)
p.getarea()