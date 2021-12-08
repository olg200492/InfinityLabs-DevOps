def flip_digits(num):
    """prints revest digit """
    num = int(num)
    sign = 1
    if num < 0:
        sign = -1
        num = num * -1
    re = 0
    while num > 0:
        temp = num % 10
        re = re *10 + temp
        num = num // 10
    re = re * sign
    print(re)

