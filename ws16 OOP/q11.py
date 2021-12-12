class B:
    def foo(self):
        return "B"
    
class D(B):
    def foo(self):
        return "D"

b = B()
d = D()
print(b.foo())
print(d.foo())