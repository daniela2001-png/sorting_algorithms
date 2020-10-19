#include "sort.h"

/**
 * swap - function that swap inside of a array
 * @a: int(pointer)
 * @b: int(pointer)
 * Return:type(void)
 */
void swap_3(int *a, int *b)
{
		int tmp;

		tmp = *a;
		*a = *b;
		*b = tmp;
}

/**
 * partition - function that sorts an array of integers in ascending
 * order using the Quick sort algorithm
 * @array:array to sort
 * @size:size of the array
 * @low: starting point
 * @high: ending point
 * Return:type(void)
 */
int partition(int *array, size_t size, int low, int high)
{
		int *pivot, i, j;

		pivot = &array[high];
		for (i = j = low; j < high; j++)
		{
			if (array[j] < *pivot)
			{
				if (i < j)
				{
					swap_3(&array[i], &array[j]);
					print_array(array, size);
				}
				i++;
			}
		}
		if (array[i] > *pivot)
		{
			swap_3(&array[i], pivot);
			print_array(array, size);
		}
		return (i);
}

/**
 * quickSort - function that sorts an array of integers in ascending
 * order using the Quick sort algorith
 * @array:array to sort
 * @size:size of the array
 * @low: starting point
 * @high: ending point
 * Return:type(void)
 */
void quickSort(int *array, size_t size, int low, int high)
{
		int pi;

		if (low < high)
		{
			pi = partition(array, size, low, high);
			quickSort(array, size, low, pi - 1);
			quickSort(array, size, pi + 1, high);
		}
}

/**
 * quick_sort - function that sorts an array of integers in ascending
 * order using the Quick sort algorithm
 * @array:array to sort
 * @size:size of the array
 * Return:type(void)
 */
void quick_sort(int *array, size_t size)
{
		if (!array || size < 2)
			return;

		quickSort(array, size, 0, size - 1);
}
