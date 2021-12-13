class X:
    """ex"""
    def __init__(self):
        self.a = 1
        self._a = 2
        self.__a = 3
    
    def get_the_hidden_attribute(self):
        return self.__a
    
    
    def set_hidden_a(self, value):
        self.__a = value

x = X()
print(x.a)
print(x._a)
print(x.__dict__["_X__a"])
x.__dict__["_X__a"] = 4
print(x.__dict__["_X__a"])
x.set_hidden_a(5)
print(x.get_the_hidden_attribute())
print(x.a)
print(x._a)
print(x.__dict__["_X__a"])