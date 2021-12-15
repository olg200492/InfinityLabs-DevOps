


try:
    import numbers
except ImportError:
    print("unable to import")
    
class Error(Exception):
    """Base class for other exceptions"""
    pass


class ValueNotNumber(Error):
    """Raised when the input value is not a number"""
    pass


class Point:
    """A class for 2-D Point"""
    def __init__(self, x=0.0, y=0.0):
        """init an object with 2 points and adds to class attribute counter  1"""
        try:
            if not isinstance(x, numbers.Number) or not isinstance(y, numbers.Number):
                raise ValueNotNumber
            self.__x = float(x)
            self.__y = float(y)
        except ValueNotNumber:
            print("Values are not numbers")       
    
        
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
        try:
            self.__x = float(x)
        except ValueError:
            print("ValueError:Invalid x input")
    
    def set_point_y(self, y):
        """ sets self.__y to y"""
        try:
            self.__y = float(y)
        except ValueError:
            print("ValueError:Invalid y input") 
            
    def __truediv__(self, scalar):
        """overrides __truediv__ built in """
        try:
            x = self.x / scalar
            y = self.y / scalar
            return Point(x, y)
        except TypeError:
            print("TypeError:Invalid scalar") 
        except ZeroDivisionError:
            print("ZeroDivisionError:error in Point  / 0")       
        
 
        
    def del_point_x(self):
        """subtracts class attribute counter  1 and deletes self """
        print("can't be deleted x")
        
    def del_point_y(self):
        """subtracts class attribute counter  1 and deletes self """
        print("can't be deleted y")
        
    x = property(get_point_x, set_point_x, del_point_x, None)
    y = property(get_point_y, set_point_y, del_point_y, None)

p = Point(6, 4)
p /'k'

