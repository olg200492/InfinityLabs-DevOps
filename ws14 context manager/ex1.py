from os import close


def read_file_capital(file_path):
    """prints file content in capital lettrs"""
    f = open(file_path, "r")
    print(f.read().upper()) 
    f.close()
    
read_file_capital("file.txt")