import numpy as np
import matplotlib.pyplot as plt

A = np.genfromtxt("sample.dat")
C = np.mean(A)
S = np.std(A)
a = np.linspace(np.min(A),np.max(A),100)
b = np.exp(-(a-C)*(a-C)/(2*S*S))/(np.sqrt(2*np.pi*S*S))
plt.plot(a,b)
plt.hist(A,bins=100,normed=True)
plt.plot([], [], ' ', label="Media = "+str(C))
plt.plot([], [], ' ', label="Sigma = "+str(S))
plt.legend()
plt.savefig("sample.pdf")
