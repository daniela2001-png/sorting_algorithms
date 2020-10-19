# Algoritmos de ordenamiento y su tiempo de complejidad

------------

Quizé ilustrar de manera **gráfica usando plots en python** a pesar de que todo este repositorio o proyecto se haya hecho con **lenguaje  C**   😝

------------

> - Mi modulo **time.py **donde importo a mi función plot del modulo plot


------------


	from plot import plot
	import random
	# Test array
	arr = [ 2, 3, 4, 10, 40, 60, 80, 100]
	x = 100

	# The approach: create arrays to show the performance curve.
	# task1: create the plot function.
	# for each size N, save the number of iterations in an array.
	size = [1, 2, 3, 4]
	iters = [1, 4, 9, 16]


	# and graph it
	plot (size, iters)

------------

> - Mi modulo plot.py que hace el plt.show() de las **iteraciones VS n (tamaño de mi arreglo)**

------------

	import matplotlib.pyplot as plt
		
	def plot(xarr, yarr):
    	plt.plot(xarr, yarr)
    	plt.xlabel("n -size array")
    	plt.ylabel("counts or iterations")
    	plt.title("size vs iterations")
    	plt.show()

------------

RESULTADO 🤗
------------
<a href="https://ibb.co/fnqbpSJ"><img src="https://i.ibb.co/mXbmqBp/README-png.png" alt="README-png" border="0"></a>

------------
Y el plot anterior es el resultado de el número de iteraciones **VS** mi arreglo visto desde el **tiempo de complejidad!**

------------



### Hecho por : <a  href="https://github.com/daniela2001-png">Daniela Morales 😎 </a>

------------



