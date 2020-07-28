class A:
    def fun1(self):
        print("Hello Shivam")

class B:
    def fun2(self):
        print("Hello Rahul")


class C:
    def fun3(self):
        print("Hello Deepa")

class D(A,B,C):
    def fun4(self):
        print("Hello Sumit")

obj=D()
obj.fun1()
obj.fun2()
obj.fun3()
obj.fun4()