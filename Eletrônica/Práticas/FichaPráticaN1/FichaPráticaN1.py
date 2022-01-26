#Importar "numpy" com np(numpy) para utilizar as funções a seguir
import numpy as np

#Criar uma matriz unidimensional/vetor
v1 = np.array([1,2,3,4,5,6])

#Alterar um valor da matriz unidimensional/Vetor
v1[1]= 5.6
print(v1,v1.dtype)

v2 = np.array([1.1,2.2,3.3,4.4])
v2[3] = 5
print(v2,v2.dtype)

#Soma de Matrizes
v3 = np.array([1,2,3,4])
v4 = np.array([4,5,6,7])
v5 = v3+v4
print(v5)

#Se quiser somar +10 ou qualquer outro numero ao numeros dentro da matriz
v5 = v5+10
print(v5)

#Criar um vetor automatico em que todos os numeros tem o mesmo espaçamento
v6 = np.arange(0,10,1)
print(v6)

#Slincing ou seja mostrar somente uma parte da matriz 
print(v6[5:10:])

vetor = np.arange(-100,101,1)
print(vetor)
print(vetor[100:])
print(vetor[:100])

#Mostra todos os numeros pares
print(vetor[100::2])#Pares Positivos do 0 ao 100
print(vetor[:100:2])#Pares Negativos do -100 ao 0
print(vetor[::2])#Todos os pares de -100 ao 100

#Mostra todos os numeros Impares
print(vetor[1:100:2])#Impares negativos do -99 ao -1
           

#BASICAMENTE#
#print(v[Posiçao que queremos começar:Posiçao que queremos que termine:espaçamento entre os numeros])


#ex :. v = np.arange(-10,10,1)
#>>>print(v)
#[-10  -9  -8  -7  -6  -5  -4  -3  -2  -1   0   1   2   3   4   5   6   7 
#   8   9]


#print(v["Posiçao 0 ou seja seria o -10":10 "Posiçao 10-1 ou seja seria o -1:2 "espaçamentp])
#ficaria entao >> print(v[:10:1])

#resultado-> [-10  -9  -8  -7  -6  -5  -4  -3  -2  -1]

#Repara que a posiçao 10 supostamente seria 0, mas ao meter v[:10] a posiçao 10 nao aparece é como se fosse um intervalo em que a posiçao 10 esta fora do intervalo

#BASICAMENTE - FIM#


v = np.arange(-10,10,1)
print(v)
print(v[10::2])







