from typing import Dict


class DefaultDict(Dict):
    """Class implemention of Dict 
    """
    defualtValue = None
    def __init__(self, num):
        super.__init__(self)