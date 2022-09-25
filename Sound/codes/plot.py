import numpy as np
import matplotlib.pyplot as plt

X = np.loadtxt('plotx.dat', dtype='float')
Y = np.loadtxt('ploty.dat',dtype = 'float')





#subplots
plt.subplot(2, 1, 1)
plt.stem(range(0,6),X)
plt.title('Digital Filter Input-Output')
plt.ylabel('$x(n)$')
plt.grid()# minor


plt.subplot(2, 1, 2)
plt.stem(range(0,20),Y)
plt.xlabel('$n$')
plt.ylabel('$y(n)$')
plt.grid()# minor

plt.show()
