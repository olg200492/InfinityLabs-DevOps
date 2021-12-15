import numbers
from math import sqrt

class Error(Exception):
    """Base class for other exceptions"""
    pass


class ValueNotNumber(Error):
    """Raised when the input value is not a number"""
    pass

class Point:
    """A class for 2-D Point"""
    counter = 0
    def __init__(self, x=0.0, y=0.0):
        """init an object with 2 points and adds to class attribute counter  1"""
        
        if not isinstance(x, numbers.Number) or not isinstance(y, numbers.Number):
            raise ValueNotNumber
        self.__x = float(x)
        self.__y = float(y)               
            
            
    def distance_from_origin(self):
        """returns distance from (0, 0)"""
        return sqrt(self.x**2 + self.y**2)
    
    def __add__(self, other):
        """overrides __add__ built-in """
        x = self.x + other.x
        y = self.y + other.y
        return Point(x, y)
        
    def __sub__(self, other):
        """overrides __sub__ built in """
        x = self.x - other.x
        y = self.y - other.y
        return Point(x, y)
    
    def __mul__(self, scalar):
        """overrides mul built in """
        x = self.x * scalar
        y = self.y * scalar
        return Point(x, y)
    
    def __imul__(self, scalar):
        """overrides __imul__ built in """
        self.x = self.x * scalar
        self.y = self.y * scalar
        return self
    
    def __truediv__(self, scalar):
        """overrides __truediv__ built in """
        x = self.x / scalar
        y = self.y / scalar
        return Point(x, y)
        
    def __str__(self):
        """overrides  __str__  built-in, returns string"""
        return "Point("+str(self.x) + ", "+ str(self.y) +")"
    
    @classmethod
    def get_counter(cls):
        """returns class attribute counter"""
        return cls.counter
    
    def __len__(self):
        """overrides __len__ returns number of attributes"""
        return len(self.__dict__.keys())
        
    def __del__(self):
        """subtracts class attribute counter  1 and deletes self """
        Point.counter -= 1
        del self
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
            raise ValueNotNumber
    
    def set_point_y(self, y):
        """ sets self.__y to y"""
        if isinstance(y, numbers.Number):
            self.__y = float(y)
        else:
            raise ValueNotNumber    
        
    def del_point_x(self):
        """subtracts class attribute counter  1 and deletes self """
        del self.__x
        
    def del_point_y(self):
        """subtracts class attribute counter  1 and deletes self """
        del self.__y

    x = property(get_point_x, set_point_x, del_point_x, None)
    y = property(get_point_y, set_point_y, del_point_y, None)


