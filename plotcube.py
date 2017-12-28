import matplotlib.pyplot as plt
import numpy as np

from mpl_toolkits.mplot3d import Axes3D
from mpl_toolkits.mplot3d.art3d import Poly3DCollection, Line3DCollection

configs = np.array((
			(0,  1,  2,  7,  8),
			(0,  1,  3,  4,  5),
			(0,  1,  2, 27, 28),
			(0,  1, 23, 24, 25),

			(0,  1,  2,  4,  5),
			(0,  1,  6,  7,  8),
			(0,  1,  2, 24, 25),
			(0,  1, 26, 27, 28),

			(0,  5, 10, 11, 16),
			(0,  5,  9, 10, 14),
			(0,  5, 10, 35, 40),
			(0,  5, 15, 20, 25),

			(0,  5,  6, 11, 16),
			(0,  4,  5,  9, 14),
			(0,  5, 30, 35, 40),
			(0,  5, 10, 20, 25),

			(0, 25, 50, 51, 76),
			(0, 25, 49, 50, 74),
			(0, 25, 50, 55, 80),
			(0, 25, 45, 50, 70),

			(0, 25, 26, 51, 76),
			(0, 24, 25, 49, 74),
			(0, 25, 30, 55, 80),
			(0, 20, 25, 45, 70)
))

basverts = np.array([
	[-0.5,-0.5,-0.5],
	[-0.5,0.5,-0.5],
	[0.5,0.5,-0.5],
	[0.5,-0.5,-0.5],
	
	[-0.5,-0.5,0.5],
	[-0.5,0.5,0.5],
	[0.5,0.5,0.5],
	[0.5,-0.5,0.5]
	])

def plotcube ( coords  ,ax , facecolor , edgecolor = 'k'):
	Z = basverts + coords
	verts = [[Z[0],Z[1],Z[2],Z[3]],
 [Z[4],Z[5],Z[6],Z[7]], 
 [Z[0],Z[1],Z[5],Z[4]], 
 [Z[2],Z[3],Z[7],Z[6]], 
 [Z[1],Z[2],Z[6],Z[5]],
 [Z[4],Z[7],Z[3],Z[0]], 
 [Z[2],Z[3],Z[7],Z[6]]]
	ax.add_collection3d(Poly3DCollection(verts, 
	facecolors=facecolor, linewidths=1, edgecolors=edgecolor, alpha=.85))

def plotline(line, ax , color):
	words = line.split()
	bas = int(words[0])
	config = int(words[1])
	
	
	for box in configs[config]:
		c = bas+box
		z = c/25
		c = c-z*25
		y = c/5
		c = c-y*5
		x = c
		plotcube ( np.array((x,y,z))  ,ax , color , 'k')
	

fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')

plt.xlim(-1,5)
plt.ylim(-1,5)
ax.set_zlim(-1,5)
ax.set_aspect('equal','box')
#plt.zlim(-1,5)

cols = ('r','g','b','m','c','r','g','b','m','c','r','g','b','m','c','r','g','b','m','c','r','g','b','m','c','r','g','b','m','c')

infile = open("solutions" , 'r')

allines = infile.readlines()
plt.show(block = False)

for i in range(25):
	
	plotline(allines[i],ax,cols[i])
	plt.waitforbuttonpress()
	

plt.waitforbuttonpress()

plt.show(block = True)
