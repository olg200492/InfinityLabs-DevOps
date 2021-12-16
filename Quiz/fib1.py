def fib1(index):
    if index == 0:
        return 0
    if index == 1:
        return 1
    return fib1(index -1) + fib1(index - 2) 

def fib2(index):
    if index == 0:
        return 0
    if index == 1:
        return 1
    num1, num2 = 0, 1
    for i in range(2,index):
        num1, num2 = num2, num1 + num2
    return num1 + num2

print(fib2(0))
print(fib2(1))
print(fib2(2))
print(fib2(15))