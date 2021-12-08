def combine_lists(ls1, ls2):
    """returns a list containing only the elements that are in both list

    Args:
        ls1 ([list]): [list of items]
        ls2 ([list]): [list of items]

    Returns:
        [list]: [containing only the elements that are in both list]
    """
    list1_as_set = set(ls1)
    intersection = list1_as_set.intersection(ls2)
    list3 = list(intersection)
    return list3
