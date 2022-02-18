import numpy as np

R1 = 1000
R2 = 2000
R3 = 3000
V1 = 1
V2 = 2

A = np.array([[(R1+R2),-R2],[-R2,(R2+R3)]])
B = np.array([[V1],[-V2]])
X = np.linalg.solve(A,B)

print("IA (uA)= ",X[0]*10**6)
print("IB (uA)", X[1]*10**6)

print("IR2=",X[0]*10**6-X[1]*10**6)

