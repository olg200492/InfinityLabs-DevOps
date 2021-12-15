import os.path

def return_file_name(path):
    #return path.split("/")[len(path.split("/")) - 1]
    return os.path.basename(path)