#include "sort.h"

/**
 * selection_sort - A function that implements the selection sort algorithm
 * @array: The array to be sorted
 * @size: size of array
 * Return: returns void
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 0;
	size_t temp = 0, mini_indx;

	if (array == NULL || size == 0)
		return;
	for (; i < size - 1; i++)
	{
		mini_indx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[mini_indx])
				mini_indx = j;
		}
		if (mini_indx != i)
		{
			temp = array[i];
			array[i] = array[mini_indx];
			array[mini_indx] = temp;

			print_array(array, size);
		}
	}
}
