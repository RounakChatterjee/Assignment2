from scipy.special import factorial
import timeit as t
n = int(input("Enter a number = "))
print("Factorial exact = ",factorial(n,exact = True))
print("Factorial using gamma function= ",factorial(n,exact = True))
print("time taken = ",t.timeit())
