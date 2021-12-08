def square_for():
    squares = []
    for i in range(101):
        squares.append(i**2)
    print(squares)

def square_while():
    squares = []
    i = 0
    while i < 101:
        squares.append(i**2)
        i += 1
    print(squares)