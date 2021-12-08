def factorial(num, accumlator=1):
    if num == 1:
        return accumlator
    return factorial(num -1, accumlator * num)