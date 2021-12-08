def str_to_disct(st):
    s = set(list(st))
    dic = {}
    for key in s:
        dic[key] = 0
    for value in st:
        dic[value] += 1
    return dic
