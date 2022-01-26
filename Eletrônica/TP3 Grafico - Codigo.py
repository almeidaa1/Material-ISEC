import numpy as np
from matplotlib import pyplot as plt
from math import pi

f3 = 400
f5 = 50
P = 1/f5 #frequencia mais pequena (1/fpequena) 
PA = P/5000
t = np.arange(0, 2*P, PA)
v3 = 1*np.sin(2*pi*f3*t+pi)
v5 = 0.5*np.sin(2*pi*f5*t+0.5*pi)

vy = 3*v5 + v3 -5

plt.plot(t, v3, 'g', t, v5, 'k', t, vy, 'r')
#green -> g
#black -> k
#red -> r
plt.axis([0, 2*P,-15, 15])
plt.grid()
plt.show()
