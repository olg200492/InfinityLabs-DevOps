def foo():
    return "foo"

def bar():
    return "bar"

foo, bar = bar, foo
print(foo(), bar())