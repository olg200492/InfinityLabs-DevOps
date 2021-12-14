def div(a, b):
    try:
        return a / b
    except ZeroDivisionError:
        print("tried to divide by zero")
    except TypeError:
        print("TypeError: Check a or b arguments")
        
    
print(div(2,2))
print(div(2,'j'))