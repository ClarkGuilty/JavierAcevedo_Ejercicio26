import numpy as np
import matplotlib.pyplot as plt

p1c = np.loadtxt("1core.txt")
p2c = np.loadtxt("2core.txt")
p4c = np.loadtxt("4core.txt")
p8c = np.loadtxt("8core.txt")

#plt.plot(times[:,1],times[:,0]/times[:,1])
plt.plot(p1c[:,1],p1c[:,0]/p1c[:,1],label = "1 core")
plt.plot(p2c[:,1],p2c[:,0]/p2c[:,1],label = "2 core")
plt.plot(p4c[:,1],p4c[:,0]/p4c[:,1],label = "4 core")
plt.plot(p8c[:,1],p8c[:,0]/p8c[:,1],label = "8 core")
plt.legend()
plt.title("Tiempo por archivo vs número de archivos")
plt.xlabel("Número de archivos")
plt.ylabel("Tiempo por archivo [s]")
plt.savefig("plot.png",dpi=300)
