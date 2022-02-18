import numpy as np
from math import pi
from matplotlib import pyplot as grafico

Va = 0.7
Rd = 100
Amp = 10
f = 50
P = 1/f
PA = P/1000
t = np.arange(0,P+PA,PA)
vin = Amp*np.sin(2*pi*f*t)
vout=vin.copy()

i=0
while (i<len(t)):
    if (vin[i]>=4.7):
        vout[i] = (2/3)*(vin[i]-4.7)
    else:
        vout[i] = 0
    i+=1

grafico.plot(t,vin,t,vout)
grafico.grid()
grafico.show()

