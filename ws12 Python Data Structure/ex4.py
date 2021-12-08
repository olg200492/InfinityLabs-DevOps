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
