class X:
    def __init__(self):
        self.__a = 1
        
    def get_a(self):
        print("hello from get_a")
        return self.__a
    
    def set_a(self, value):
        print("hello from set_a")
        self.__a = value
        
    a = property(get_a, set_a)
    
x = X()
x.a = 5
print(x.a)