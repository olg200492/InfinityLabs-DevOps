def func(*args,**keyargs):
    """if arg name is name prints it's value """
    flag = 0
    for key, value in keyargs.items():
        if key == "name":
            print(value)
            flag = 1
    if flag == 0:
        print("no name was passed")