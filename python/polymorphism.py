class A:
    def init(self,length,breadth):
        self.length=length
        self.breadth=breadth
    def getarea(self):
        print("area of rectangle: ",self.length*self.breadth)
    
class B(A):
    def init(self,length):
        self.length=length
    def getarea(self):
        print("Area of Square is: ",self.length*self.length)

obj=B()
obj.init(2,5)
obj.init(6)