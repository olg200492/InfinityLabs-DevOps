def print_list_index_and_element(ls):
    enumerate_ls = enumerate(ls)
    for item in list(enumerate_ls):
        print(item)
        
def print_dict_key_and_element(dic):
    enumerate_dic = enumerate(dic.items())
    for item in list(enumerate_dic):
        print(item)
