from functools import reduce
def sum_list_for(ls):
    """"sum list varibales using for"""
    sum = 0
    for item in ls:
        sum += item
    return sum

def sum_list_reduce(ls):
    """"sum list varibales using reduce"""
    return reduce(lambda x,y :x+y, ls)

def sum_list_sum_func(ls):
    """"sum list varibales using built in sum"""
    return sum(ls)