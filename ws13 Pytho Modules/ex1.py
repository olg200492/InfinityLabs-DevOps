def check_name_i_global_namespace(name):
    """check if name in global namespace"""
    if name in globals():
        print(name+" is inside global namespace")
    else:
        print(name+" is not inside global namespace")
