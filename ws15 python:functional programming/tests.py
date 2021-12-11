from ex1 import sum_list_for
from ex1 import sum_list_reduce
from ex1 import sum_list_sum_func

print("Test ex1 sum list in for function")
print("sum list in for [1,1,1,1] returned:"+str(sum_list_for([1,1,1,1])), " 'PASSED'" if sum_list_for([1,1,1,1]) == 4 else " 'FAILED'")
print("********************************************")
print("Test ex1 sum list with reduce")
print("sum list with reduce [1,2,3,4] returned:"+ str(sum_list_reduce([1, 2, 3, 4])), " 'PASSED" if sum_list_reduce([1, 2, 3, 4]) ==  10 else " 'FAILED" )
print("********************************************")
print("Test ex1 sum list with built in sum")
print("sum list with built in sum [1,2,3,4] returned:"+ str(sum_list_sum_func([1, 2, 3, 4])), " 'PASSED" if sum_list_sum_func([1, 2, 3, 4]) ==  10 else " 'FAILED" )
print("********************************************")
print("Test ex1 functions with tuple:")
print("sum list in for (1,2,3,4) returned:" + str(sum_list_for((1,2,3,4))) )
print("sum_list_reduce (1,2,3,4) returned:" + str(sum_list_reduce((1,2,3,4))) )
print("sum_list_sum_func (1,2,3,4) returned:" + str(sum_list_sum_func((1,2,3,4))) )