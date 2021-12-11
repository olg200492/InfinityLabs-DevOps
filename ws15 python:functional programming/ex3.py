def boom_7_for(number):
    """itirate from zero to number with for,if number is divisable by 7 or contain 7 as a digit we'll add 'BOOM' to the list else we'll add the number"""
    ls = []
    for num in range(number +1):
        if '7' in str(num) or num % 7 == 0:
            ls.append("BOOM")
        else:
            ls.append(num)
    return ls     

def boom_7_list_comprehension(number):
    """itirate from zero to number with list comprehension,if number is divisable by 7 or contain 7 as a digit we'll add 'BOOM' to the list else we'll add the number"""
    return ["BOOM" if i % 7 == 0 or '7' in str(i) else i for i in range(number + 1)]

def boom_7_map(number):
    """itirate from zero to number with map,if number is divisable by 7 or contain 7 as a digit we'll add 'BOOM' to the list else we'll add the number"""
    return list(map(lambda x: 'BOOM' if x %7 == 0 or '7' in str(x) else x, range(number + 1)))


