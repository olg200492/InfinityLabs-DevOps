class X:
    __slots__ = ["a"]
    def __init__(self, a):
        self.a = a
        
    def __getattr__(self, item):
        return "attribute does not exist"
        
        
class Y:
    
    def __init__(self, a):
        self.a = a
        
    def __setattr__(self, name, value):
        if name == 'a':
            self.__dict__[name] = value
        
    def __getattr__(self, item):
        return "attribute does not exist"
    
x = Y(1)
print(x.a)
x.a = 2
print(x.a)
x.b = 3
print(x.b)