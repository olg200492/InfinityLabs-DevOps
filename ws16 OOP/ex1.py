import numbers
from math import sqrt
class Point:
    """A class for 2-D Point"""
    counter = 0
    def __init__(self, x=0.0, y=0.0):
        """init an object with 2 points and adds to class attribute counter  1"""
        if not isinstance(x, numbers.Number) or not isinstance(y, numbers.Number):
            print("Error:You entered non numbers type")
            self.x = 0.0
            self.y = 0.0
        else:
            self.x = float(x)
            self.y = float(y)
        Point.counter += 1
            
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
        