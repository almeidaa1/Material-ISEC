import numpy as np
from math import pi
from matplotlib import pyplot as grafico

Va = 0.7
Rd = 100
Amp = 15
f = 50
P = 1/f
PA = P/1000
t = np.arange(0,P+PA,PA)
vin = Amp*np.sin(2*pi*f*t)
vout=vin.copy()

i=0
while (i<len(t)):
    if (vin[i]>=4.7):
            vout[i] = (5/7)*(-4.7+vin[i]) + 0.7
    else:
        vout[i]= vin[i] - 4
    i+=1

grafico.plot(vin,vout)
grafico.grid()
grafico.show()

