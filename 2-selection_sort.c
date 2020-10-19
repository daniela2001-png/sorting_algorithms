#include "sort.h"

/**
 * swap_2 - intercambia el valor de un nodo
 * @xp: 1er valor
 * @yp:2do valor
 * Return: void
 */

void swap_2(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

/**
 * selection_sort - algoritmo
 * @array: arregloa ordenar
 * @size: tamaño de mi arreglo
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;

	if (!array || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[min_idx])
				min_idx = j;
		swap_2(&array[min_idx], &array[i]);
		print_array(array, size);
	}
}
