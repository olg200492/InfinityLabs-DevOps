def left_rotate_list(ls):
    """performs left rotation using slicing

    Args:
        ls (list): [list of items]

    Returns:
        [list]: [left rotated list]
    """
    return ls[1:] + ls[:1]
