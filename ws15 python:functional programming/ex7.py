def make_adder(n):
    def make_add(x):
        return x + n
    return make_add