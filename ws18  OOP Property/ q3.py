class X:
    """ex"""
    def __init__(self):
        self.__a = 3
    
    def get_the_hidden_attribute(self):
        return self.__a    
    
    def set_hidden_a(self, value):
        self.__a = value
        
    a = property(get_the_hidden_attribute, set_hidden_a)

x = X()

print(x.a)
x.a = 4
print(x.a)