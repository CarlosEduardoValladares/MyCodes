# -*- coding: utf-8 -*-
"""
Created on Sun Mar 31 20:59:52 2019

@author: Cliente
"""

a = 6643
b = 2873

x = a
y = b

r = a % b

while (r > 0):
    
    print("a = " + str(a) + "; b = " + str(b) + "; r = " + str(r))
    a = b
    b = r
    r = a % b
    
print("a = " + str(a) + "; b = " + str(b) + "; r = " + str(r))