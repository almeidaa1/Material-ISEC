import numpy as np
R1 = 1000
R2 = 2000
R3 = 2000
V1 = 1

A = np.array([[1,-1,-1],[R1,R2,0],[0,-R2,R3]])
B = np.array([[0],[V1],[0]])
X = np.linalg.solve(A,B)

print("I1 = ",X[0]*1000)
print("I2 = ",X[1]*1000)
print("I3 = ",X[2]*1000)

IR1 = X[0]*1000
VR1 = IR1 * R1
