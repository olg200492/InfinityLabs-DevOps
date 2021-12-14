import numbers
from math import e, sqrt

class Property:
    """ class descriptor"""
    def __init__(self, fget=None, fset=None, fdel=None, fdoc=None):
        self.getter = fget
        self.setter = fset
        self.deleter = fdel
     

    def __get__(self, obj, objtype=None):
        result = obj.__dict__
        for i in result:
            return result[i]

    def __set__(self, instance, value):
        print("set")
        self.setter(instance, value)


    def __delete__(self, obj):
        self.deleter(obj)
    
    def Getter(self, f_get):
        return type(self)(f_get, self.setter, self.deleter)

    def Setter(self, f_set):
        return type(self)(self.getter, f_set, self.deleter)

    def Deleter(self, f_del):
        return type(self)(self.getter, self.setter, f_del)




class PointD:
    """A class for 2-D Point"""
    def __init__(self, x=0.0, y=0.0):
        """init an object with 2 points and adds to class attribute counter  1"""
        if not isinstance(x, numbers.Number) or not isinstance(y, numbers.Number):
            print("Error:You entered non numbers type")
            self.__x = 0.0
            self.__y = 0.0
        else:
            self.__x = float(x)
            self.__y = float(y)     
    
    
    @Property
    def x(self):
        """return point x attribute"""
        return self.__x
    
    @Property
    def y(self):
        """return point y attribute"""
        return self.__y
    
    @x.Getter
    def x(self):
        return self.__x   
   
    
    @y.Getter
    def y(self):
        return self.__y
    
    @x.Setter
    def x(self, x):
        """ sets self.__x to x"""
        self.__x = float(x)
        
    
    @y.Setter
    def y(self, y):
        """ sets self.__y to y"""
        self.__y = float(y)
   
     
    @x.Deleter   
    def x(self):
        """subtracts class attribute counter  1 and deletes self """
        print("can't be deleted x")
    
    @y.Deleter
    def y(self):
        """subtracts class attribute counter  1 and deletes self """
        print("can't be deleted y")
        
    def __str__(self):
        """overrides  __str__  built-in, returns string"""
        return "Point("+str(self.__x) + ", "+ str(self.__y) +")"
        
    

p = PointD(2, 2)
print(p)
p.x = 3
print(p)
p.y = 4
print(p)
print(p.x, p.y)
del p.x
del p.y