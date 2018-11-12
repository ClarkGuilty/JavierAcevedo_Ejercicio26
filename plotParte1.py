import numpy as np
import matplotlib.pyplot as plt

p1c = np.loadtxt("time.txt")

plt.plot(p1c[:,1],p1c[:,0]/p1c[:,1])
plt.title("Tiempo por archivo vs número de archivos no Cluster")
plt.xlabel("Número de archivos")
plt.ylabel("Tiempo por archivo [s]")
plt.savefig("plotParte1.png",dpi=300)
