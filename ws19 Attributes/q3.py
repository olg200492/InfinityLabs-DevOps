class Vehicle:
    """Vehicle class doc"""
    kind = 'car'
    __slots__ = ["manufacture","model"]
    def __init__(self, manufacture, model):
        self.manufacture = manufacture
        self.model = model
        
    def __repr__(self):
        return "<{manu}, {model}>".format(manu=self.manufacture, model=self.model)
    


car = Vehicle("Toyota", "Corrola")
print(Vehicle.__dict__)
print(car.__slots__)
