import numpy as np
import matplotlib.pyplot as plt
x=np.arange(0,3*np.pi,0.1)
y_sin=np.sin(x)
y_cos=np.cos(x)

#plot the points using matplotlib
plt.plot(x,y_sin)
plt.plot(x,y_cos)
plt.xlabel('x axis label')
plt.ylabel('y axis label')
plt.title('sine and cosine')
plt.legend(['sine','cosine'])
plt.show()