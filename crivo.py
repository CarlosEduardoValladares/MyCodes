def Crivo(n):
    
    lista = []
    
    for i in range(2, n+1):        
        lista.append(i)
    
    for i in lista: 
        if(i > int( n**(1/2) )):
            break;
            
        print("i = " + str(i) + "\n")
        for j in lista:
            if(j==i):
                continue
            if(j%i == 0):
                print(str(j) + " removido")
                lista.remove(j)
        
    return lista

print(Crivo(11))
