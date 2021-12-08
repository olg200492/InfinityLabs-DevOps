def square_for():
    """print square numbers from 1 to 100 in for loop"""
    squares = []
    for i in range(101):
        if i**(.5) == int(i**(.5)):
            squares.append(i)
    print(squares)

def square_while():
    """print square numbers from 1 to 100 in while loop"""
    squares = []
    i = 0
    while i < 101:
        if i**(.5) == int(i**(.5)):
            squares.append(i)
        i += 1
    print(squares)