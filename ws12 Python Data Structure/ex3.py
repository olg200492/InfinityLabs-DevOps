def str_to_disct(st):
    """[return dict containing each letter and its occurrence in string]

    Args:
        st ([str]): [string]

    Returns:
        [dict]: [dict]
    """
    s = set(list(st))
    dic = {}
    for key in s:
        dic[key] = 0
    for value in st:
        dic[value] += 1
    return dic
