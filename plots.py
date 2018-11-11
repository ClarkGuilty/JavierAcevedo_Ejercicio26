import numpy as np
import matplotlib.pyplot as plt

times = np.loadtxt("time.txt")

plt.plot(times[:,1],times[:,0]/times[:,1])
plt.xlabel("Número de archivos")
plt.ylabel("Tiempo por archivo [s]")
plt.savefig("plot.png",dpi=300)
