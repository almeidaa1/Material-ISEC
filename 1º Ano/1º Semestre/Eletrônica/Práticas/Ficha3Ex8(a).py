import numpy as np
R1 = 1000
R2 = 2000
R3 = 1000
R4 = 2000
R5 = 2000
V1 = 3

A = np.array([[1,1,1,0,0,0],[0,0,1,-1,-1,0],[0,1,0,1,0,-1],[0,0,R1,0,R2,0],[0,R5,-R1,-R4,0,0],[0,0,0,R4,-R2,R3]])

b = np.array([0,0,0,V1,0,0])

x = np.linalg.solve(A,b)

print("I1 (mA)=",x[0]*10**3)
print("I2 (mA)=",x[1]*10**3)
print("I3 (mA)=",x[2]*10**3)
print("I4 (mA)=",x[3]*10**3)
print("I5 (mA)=",x[4]*10**3)
print("I6 (mA)=",x[5]*10**3)

