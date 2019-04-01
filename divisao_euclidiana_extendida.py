# -*- coding: utf-8 -*-
"""
Created on Sun Mar 31 21:13:58 2019

@author: Cliente
"""

a = 6643
b = 2873
x = 1
y = 0
xi = 0
yi = 1

r = a % b

while (r > 0):
    
    q = a // b
    aux_x = x - xi * q
    aux_y = y - yi * q    
    x = xi
    y = yi
    xi = aux_x
    yi = aux_y
    
    print("a = " + str(a) + "; b = " + str(b) + "; q = " + str(q) + "; r = " + str(r))
    print("x = " + str(x) + "; y = " + str(y) + "; xi = " + str(xi) + "; yi = " + str(yi))
    print("aux_x = " + str(aux_x) + "; aux_y = " + str(aux_y))
    print("")
    
    a = b
    b = r
    r = a % b
    q = a // b

print("a = " + str(a) + "; b = " + str(b) + "; q = " + str(q) + "; r = " + str(r))    
print("alfa = " + str(xi) + "; beta = " + str(yi))