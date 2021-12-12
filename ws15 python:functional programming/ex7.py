def make_adder(n):
    """returns a add function"""
    def make_add(x):
        return x + n
    return make_add