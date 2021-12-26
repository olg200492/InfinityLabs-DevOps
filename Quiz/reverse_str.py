def reverse1(string):
    list1 = list(string)
    temp = []
    for i in range(len(string)):
        temp.append(list1[len(string) - i -1])
    return "".join(temp)

def reverse2(string):
    return string[::-1]

print(reverse2("olga hi"))