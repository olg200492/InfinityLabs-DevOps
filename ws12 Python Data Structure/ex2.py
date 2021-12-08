def even_numbers_while():
    list = []
    i = 0
    while i < 101:
        if i %2 == 0:
            list.append(i)
        i += 1
    print(list)
    
def even_numbers_for():
    list = []
    for i in range(101):
        if i %2 == 0:
            list.append(i)
    print(list)
def even_numbers_range():
    list = []
    for i in range(0, 101, 2):
            list.append(i)
    print(list)