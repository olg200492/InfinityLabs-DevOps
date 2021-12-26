def num_max(num):
    arr = list(str(num))
    max = num
    for i in range(len(arr)):
        if int(arr[i]) < 5:
            temp = arr.copy()
            temp[i] = '5'
            if max < int(''.join(temp)):
                max = int(''.join(temp))
    return max
            
            
print(num_max(1000))
print(num_max(5000))
print(num_max(9999))
#int(''.join(str(x) for x in temp))