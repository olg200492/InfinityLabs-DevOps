from EvenOrNot import print_even_or_not
from PrintStringNumTimes import print_str_num_times
from LeapYear import check_if_leap_year
from FlipIntegerDigits import flip_digits
from PrintGrade import grade
from FactorialTailRecursion import factorial

print("Test for Ex1")
print_even_or_not(2)
print_even_or_not(0)
print_even_or_not(-1)
print_even_or_not(-2)
print("End test for Ex1")


print("Test for ex2")
print_str_num_times("Hi")
print_str_num_times("one", 2)
print("End test for Ex2")

print("Test for ex3")
check_if_leap_year(2000)
check_if_leap_year(2021)
check_if_leap_year(1992)
print("End test for Ex3")

print("Test for ex4")
flip_digits(2000)
flip_digits("5678")
flip_digits(-1234)
print("End test for Ex4")

print("Test for ex5")
grade(2000)
grade(90)
grade(50)
grade("88")
print("End test for Ex5")

print("Test for ex6")
print("factorial of 4 is:" + str(factorial(4)))
print("factorial of 5 is:" + str(factorial(5)))
print("End test for Ex6")