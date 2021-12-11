def count_number_of_arguments(*args):
    """counts number of arguments passed to fumction"""
    sum = 0
    for arg in args:
        sum += 1
    return sum