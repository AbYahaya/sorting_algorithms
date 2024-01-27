#include "sort.h"

/**
 * quick_sort - function that sorts an array of integer using quick s
 * @array: array
 * @size: array's size
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_s(array, 0, size - 1, size);
}

/**
 * partition - partition
 * @array: array
 * @low: lower bound
 * @hi: higher bound
 * @size: array's size
 * Return: i
 */
int partition(int *array, int low, int hi, size_t size)
{
	int i = low - 1, j = low;
	int pivot = array[hi], aux = 0;

	for (; j < hi; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (array[i] != array[j])
			{
				aux = array[i];
				array[i] = array[j];
				array[j] = aux;
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] != array[hi])
	{
		aux = array[i + 1];
		array[i + 1] = array[hi];
		array[hi] = aux;
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * quick_s - quick sort
 * @array: given array
 * @low: lower bound
 * @hi:higher bound
 * @size: array size
 * Return: void
 */
void quick_s(int *array, int low, int hi, size_t size)
{
	int pivot;

	if (low < hi)
	{
		pivot = partition(array, low, hi, size);
		quick_s(array, low, pivot - 1, size);
		quick_s(array, pivot + 1, hi, size);
	}
}
