import numpy as np

R1 = 1000
R2 = 2000
R3 = 3000
V1 = 1
V2 = 2

A = np.array([[1,-1,-1],[R1,R2,0],[0,-R2,R3]])
b = np.array([[0],[V1],[-V2]])
solucao=np.linalg.solve(A,b)
print("I1 (uA) = ",solucao[0]*10**6)
print("I2 (uA) = ",solucao[1]*10**6)
print("I3 (uA) = ",solucao[2]*10**6)


