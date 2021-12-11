def dict_to_list(ls):
    """return a dict containing values from the list,and keys is the index in the list"""
    return dict(zip(range(len(ls)+1), ls))

def dict_to_list_comp(ls):
    return {key: item for (key,item) in zip(range(len(ls)+1), ls)}