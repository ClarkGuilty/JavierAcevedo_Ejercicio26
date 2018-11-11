import numpy as np
import matplotlib.pyplot as plt

1c = np.loadtxt("1core.txt")
2c = np.loadtxt("2core.txt")
4c = np.loadtxt("4core.txt")
8c = np.loadtxt("8core.txt")

#plt.plot(times[:,1],times[:,0]/times[:,1])
plt.plot(1c[:,1],1c[:,0]/1c[:,1],label = "1 core")
plt.plot(2c[:,1],2c[:,0]/2c[:,1],label = "2 core")
plt.plot(4c[:,1],4c[:,0]/4c[:,1],label = "4 core")
plt.plot(8c[:,1],8c[:,0]/8c[:,1],label = "8 core")
plt.legend()
plt.title("Tiempo por archivo vs número de archivos")
plt.xlabel("Número de archivos")
plt.ylabel("Tiempo por archivo [s]")
plt.savefig("plot.png",dpi=300)
