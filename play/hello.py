def greet():
    """
    This function greets to
    the person passed in as
    a parameter
    """
    return ("Hello, " + "Olga" + ". Good morning!")

greet()

def myFun(*argv):
    for arg in argv:
        print(arg)

def myFun(**kwargs):
    for key, value in kwargs.items():
        print("%s == %s" % (key, value))
 
 
# Driver code
myFun(first='Geeks', mid='for', last='Geeks')