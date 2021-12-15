import os.path

def return_file_name(path):
    #return path.split("/")[len(path.split("/")) - 1]
    return os.path.basename(path)

def capital_letters_file(path):
    string = None
    with open(return_file_name(path),"r") as f:
        string = f.read().upper()
    with open(return_file_name(path),"w") as f:
        f.write(string)
        
def check_if_prime(number):
    if type(number) == float:
        raise TypeError("TypeError: entered float type")
    if number > 1 :
        for i in range( 2, int(number / 2) + 1 ):
            if number % i == 0:
                return False
        return True
    else:
        return False
    
lambda1 = lambda x:x**2

lambda2 = lambda x, y:x + y

def dir_list_no_dunder1(string):
    list = []
    for item in dir(string):
        if not item.startswith("__"):
            list.append(item)
    print(list)
    return list
def dir_list_no_dunder2(string):
    return [item  for item in dir(string) if not item.startswith("__")]

def dir_list_no_dunder3(string):
    return list(filter(lambda key:not key.startswith("__"), dir(string)))

def increment_list(ls):
    for i in range(len(ls)):
        ls[i] += 1
        
def remove_not_str_from_list(ls):
    #return list(filter(lambda item:isinstance(item, str) , ls))
    i = 0
    while i < len(ls):
        if not isinstance(ls[i], str):
            ls.remove(ls[i])
            i -= 1
        i += 1
        
def print_list_index_and_elements(ls):
    for index, ele in enumerate(ls):
        print("(" + str(index) + ", " + str(ele) +")" , end=" ")
    print("")
    
def print_dict_keys_and_values(dic):
    for key, value in dic.items():
        print("(key:" + str(key) + ", value:" + str(value) +")" , end=" ")
    print("")
    
def dict_from_list1(ls):
    dic = {}
    for index, ele in enumerate(ls):
        dic[index] = ele
    return dic

def dict_from_list2(ls):    
    return {item : value for (item, value) in enumerate(ls)}
        
#capital_letters_file("/home/olga/Desktop/git-InfinityLabs/olga-lapovsky/ws22 Python Summery/file.txt")
#dir_list_no_dunder1()
#print(dir_list_no_dunder3("olga"))

#print_list_index_and_elements(["o", "l", "g" , "a"])
#print_dict_keys_and_values({1:"o", 2:"l"})
print(dict_from_list2(['a', 'b', 'c']))
