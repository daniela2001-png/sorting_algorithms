#include "sort.h"

/**
 * bubble_sort - el peor algoritmo de la historia
 * @array: arreglo a ordenar
 * @size: tamaño de mi arreglo
 * Return: void
 */


void bubble_sort(int *array, size_t size)
{
	size_t element = 0;
	int swap, counter = 1;

	/* verifico si el array es nulo o si su tamaño es menor a 2*/
	if (!array || size < 2)
		return;

	while (counter > 0)
	{
		/* aqui me salgo del while*/
		counter = 0;

		for (element = 0; element < size - 1; element++)
		{
			/* verifico si el anterior es mayor al siguiente */
			if (array[element] > array[element + 1])
			{
				swap = array[element + 1];
				array[element + 1] = array[element];
				array[element] = swap;
				counter += 1;
				print_array(array, size);
			}
		}
	}
}
