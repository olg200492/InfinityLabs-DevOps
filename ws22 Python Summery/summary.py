import os.path

def return_file_name(path):
    """returns file name from path

    Args:
        path (str): [file path]

    Returns:
        [str]: [file name]
    """
    #return path.split("/")[len(path.split("/")) - 1]
    return os.path.basename(path)

def capital_letters_file(path):
    """Turns content file to capital letters

    Args:
        path (str): file path
    """
    string = None
    with open(return_file_name(path),"r") as f:
        string = f.read().upper()
    with open(return_file_name(path),"w") as f:
        f.write(string)
        
def check_if_prime(number):
    """checks if number is prime

    Args:
        number (int): 

    Raises:
        TypeError: if number of type float

    Returns:
        [bool]: if number prime returns ,True else returns False
    """
    if type(number) == float:
        raise TypeError("TypeError: entered float type")
    if number > 1 :
        for i in range( 2, int(number / 2) + 1 ):
            if number % i == 0:
                return False
        return True
    else:
        return False

#labada function to square an argument
lambda1 = lambda x:x**2
   
#labada function to add 2 arguments
lambda2 = lambda x, y:x + y

def dir_list_no_dunder1(string):
    """Reduce the list to only the dunder methods

    Args:
        string (str): argument

    Returns:
        [list]: [list of string object methods without dunder methods]
    """
    list = []
    for item in dir(string):
        if not item.startswith("__"):
            list.append(item)
    print(list)
    return list

def dir_list_no_dunder2(string):
    """Reduce the list to only the dunder methods using list comprehension

    Args:
        string (str): argument

    Returns:
        [list]: [list of string object methods without dunder methods]
    """
    return [item  for item in dir(string) if not item.startswith("__")]

def dir_list_no_dunder3(string):
    """Reduce the list to only the dunder methods using list comprehension

    Args:
        string (str): argument

    Returns:
        [list]: [list of string object methods without dunder methods]
    """
    return list(filter(lambda key:not key.startswith("__"), dir(string)))

def increment_list(ls):
    """increments list elements by one

    Args:
        ls (list): [list of numbers]
    """
    for i in range(len(ls)):
        ls[i] += 1
        
def remove_not_str_from_list(ls):
    """removes all non str object from ls

    Args:
        ls ([list]): list of elements
    """
    i = 0
    while i < len(ls):
        if not isinstance(ls[i], str):
            ls.remove(ls[i])
            i -= 1
        i += 1
        
def print_list_index_and_elements(ls):
    """prints indexes and elements using enumerate

    Args:
        ls (list): list of elements
    """
    for index, ele in enumerate(ls):
        print("(" + str(index) + ", " + str(ele) +")" , end=" ")
    print("")
    
def print_dict_keys_and_values(dic):
    """Prints keys and elements using items

    Args:
        dic (dict): dict of elements
    """
    for key, value in dic.items():
        print("(key:" + str(key) + ", value:" + str(value) +")" , end=" ")
    print("")
    
def dict_from_list1(ls):
    """[Receives a list and returns a dict where values are the elements of the list, and key is their index]

    Args:
        ls (list): [list of elements]

    Returns:
        [dict]: 
    """
    dic = {}
    for index, ele in enumerate(ls):
        dic[index] = ele
    return dic

def dict_from_list2(ls):
    """Receives a list and returns a dict where values are the elements of the list, and key is their index,
        with dict comprehension
    Args:
        ls (list): [list of elements]

    Returns:
        [dict]: 
    """    
    return {item : value for (item, value) in enumerate(ls)}

class DefaultDict():
    """Class implemention of Dict 
    """
    defualtValue = None
    
    def __init__(self, num):
        """Init an object with attributes:
            - self.storage: list of list of size 100
            - self.size: set to 100
            - self.size: set to 0
            set DefaultDict.defualtValue to num

        Args:
            num (int): defualt number to keys does not exist
        """
        self.storage = [[] for _ in range(100)]
        self.size = 100
        self.length = 0
        DefaultDict.defualtValue = num
        
    def __setitem__(self, key, value):
        """Implement of setitem

        Args:
            key ([int, float, str]): 
            value ([int, float, str]): 
        """
        idx = hash(key) % self.size
        for ele in self.storage[idx]:
            if key == ele[0]:
                ele[1] = value
                break
        else:
            self.storage[idx].append([key, value])
            self.length += 1
                
    def __getitem__(self, key):
        """Implemention of getitem

        Args:
            key (int, float, str): 

        Returns:
            [int, float, str]: value of item according to key if exist else returns DefaultDict.defualtValue
        """
        idx = hash(key) % self.size
        for ele in self.storage[idx]:
            if ele[0] == key:
                return ele[1]

        return DefaultDict.defualtValue
    
    def __str__(self):
        """string representation of DefaultDict object

        Returns:
            [str]: str representation of DefaultDict object
        """
        string = "["
        for item in self.storage:
            string += str(item) + " ,"
            string += "]"
        return string
    
    
        
            
        
#capital_letters_file("/home/olga/Desktop/git-InfinityLabs/olga-lapovsky/ws22 Python Summery/file.txt")
#dir_list_no_dunder1()
#print(dir_list_no_dunder3("olga"))

#print_list_index_and_elements(["o", "l", "g" , "a"])
#print_dict_keys_and_values({1:"o", 2:"l"})
#print(dict_from_list2(['a', 'b', 'c']))
d = DefaultDict(0)
d["a"] = "hello"
print(d)
print(d["a"])
print(d["b"])
