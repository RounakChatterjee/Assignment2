'''
This python program links a dll file from windows created from a c file to aid the calculation
the CMD command for creating dll file is:

gcc -shared -o libcalci.dll -fPIC factorial.c

This factorial.c is the actual factorial.c file that we created in C to compute the factorial
'''
from ctypes import *
fact = CDLL("C:/Users/ROUNAK/Desktop/c programs/libcalci.dll")
fact.main()