import numbers
from math import sqrt
class Point:
    def __init__(self, x=0.0, y=0.0):
        if not isinstance(x, numbers.Number) or not isinstance(x, numbers.Number):
            print("Error:You entered non numbers type")
            self.x = 0.0
            self.y = 0.0
        else:
            self.x = x
            self.y = y
            
    def distance_from_origin(self):
        return sqrt(self.x**2 + self.y**2)
        