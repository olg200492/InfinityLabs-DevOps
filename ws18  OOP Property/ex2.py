import numbers
from math import e, sqrt

class Property:
    """ class descriptor"""
    def __init__(self, fget=None, fset=None, fdel=None, fdoc=None):
        self.get = fget
        self.set = fset
        self.delete = fdel
     

    def __get__(self, obj, objtype=None):
        result = obj.__dict__
        for i in result:
            return result[i]

    def __set__(self, obj, value):
        self.set(obj, value)


    def __delete__(self, obj):
        self.delete(obj)

    

    
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
    
        
    def __str__(self):
        """overrides  __str__  built-in, returns string"""
        return "Point("+str(self.__x) + ", "+ str(self.__y) +")"
    
    def get_point_x(self):
        """return point x attribute"""
        return self.__x
    
    def get_point_y(self):
        """return point y attribute"""
        return self.__y

    def set_point_x(self, x):
        """ sets self.__x to x"""
        if isinstance(x, numbers.Number):
            self.__x = float(x)
        else:
            print("Invalid x input")
    
    def set_point_y(self, y):
        """ sets self.__y to y"""
        if isinstance(y, numbers.Number):
            self.__y = float(y)
        else:
            print("Invalid y input")    
        
    def del_point_x(self):
        """subtracts class attribute counter  1 and deletes self """
        print("can't be deleted x")
        
    def del_point_y(self):
        """subtracts class attribute counter  1 and deletes self """
        print("can't be deleted y")
        
    x = Property(get_point_x, set_point_x, del_point_x, None)
    y = Property(get_point_y, set_point_y, del_point_y, None)

p = PointD(2, 2)
print(p)
p.x = 3
print(p)
p.y = 3
print(p)
print(p.x, p.y)
del p.x
del p.y