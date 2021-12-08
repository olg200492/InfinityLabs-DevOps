def even_numbers_while():
    """prints list of even numbers fro 0 to 100 while loop"""
    list = []
    i = 0
    while i < 101:
        if i %2 == 0:
            list.append(i)
        i += 1
    print(list)
    
def even_numbers_for():
    """prints list of even numbers fro 0 to 100 foor loop"""
    list = []
    for i in range(101):
        if i %2 == 0:
            list.append(i)
    print(list)
    
def even_numbers_range():
    """prints list of even numbers fro 0 to 100 range"""
    list = []
    for i in range(0, 101, 2):
            list.append(i)
    print(list)