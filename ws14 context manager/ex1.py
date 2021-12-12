from os import close


def read_file_capital(file_path):
    """prints file content in capital lettrs"""
    f = open(file_path, "r")
    print(f.read().upper()) 
    f.close()
    
def read_file_capital_with(file_path):
    """prints file content in capital lettrs"""
    with open(file_path, "r") as f:
        print(f.read().upper()) 
    
    
read_file_capital_with("file.txt")