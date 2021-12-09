def square_for():
    """print square numbers from 1 to 100 in for loop"""
    squares = []
    for i in range(101):
        if i**(.5) == int(i**(.5)):
            squares.append(i)
    print(squares)

def square_while():
    """print square numbers from 1 to 100 in while loop"""
    squares = []
    i = 0
    while i < 101:
        if i**(.5) == int(i**(.5)):
            squares.append(i)
        i += 1
    print(squares)
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
def str_to_disct(st):
    """[return dict containing each letter and its occurrence in string]

    Args:
        st ([str]): [string]

    Returns:
        [dict]: [dict]
    """
    s = set(list(st))
    dic = {}
    for key in s:
        dic[key] = 0
    for value in st:
        dic[value] += 1
    return dic

def print_list_index_and_element(ls):
    """[prints enumerate object from list]

    Args:
        ls ([list]): [list of items]
    """
    enumerate_ls = enumerate(ls)
    for item in list(enumerate_ls):
        print(item)
        
def print_dict_key_and_element(dic):
    """[prints enumerate object of dic.items()]

    Args:
        dic ([dict]): [dict of values]
    """
    enumerate_dic = enumerate(dic.items())
    for item in list(enumerate_dic):
        print(item)

def combine_lists(ls1, ls2):
    """returns a list containing only the elements that are in both list

    Args:
        ls1 ([list]): [list of items]
        ls2 ([list]): [list of items]

    Returns:
        [list]: [containing only the elements that are in both list]
    """
    list1_as_set = set(ls1)
    intersection = list1_as_set.intersection(ls2)
    list3 = list(intersection)
    return list3

def left_rotate_list(ls):
    """performs left rotation using slicing

    Args:
        ls (list): [list of items]

    Returns:
        [list]: [left rotated list]
    """
    return ls[1:] + ls[:1]
