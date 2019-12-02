import timeit as t
def fact(n):
	if(n == 1):
		return 1;
	else:
		return n*fact(n-1)
n = int(input("Enter a number = "))
print("The factorial of the number is = ",fact(n))
print("Time taken = ",t.timeit());