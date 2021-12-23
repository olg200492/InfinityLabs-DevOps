def roman_to_integer(string):
    dic = {
        'I':1,
        'V':5,
        'X':10,
        'L':50,
        'C':100,
        'D':500,
        'M':1000
    }
    
    res = 0
    i = 0
 
    while i < len(string):
        s1 = dic[string[i]]
 
        if (i + 1 < len(string)): 
            s2 = dic[string[i + 1]]
            if (s1 >= s2):
                res += s1
                i += 1
            else:
                res = res + s2 - s1
                i += 2
        else:
            res += s1
            i += 1 
    return res

print(roman_to_integer('XXXVI'))