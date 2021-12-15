import numbers
def div(a, b):
    try:
        if not isinstance(a, numbers.Number) or not isinstance(b, numbers.Number):
            print("TypeError: Check a or b arguments")
            raise TypeError
        return a / b
    except ZeroDivisionError:
        print("tried to divide by zero")        
    
print(div(2,2))
print(div(2,'j'))