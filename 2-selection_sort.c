#include "sort.h"
/**
 * selection_sort - Function that sorts an array of integers
 * in ascending order using the Selection sort algorithm
 * @array: Array of integers to sort
 * @size: number of integers
 *
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_index;
	int temp;

	if (!array || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		/*Assume that the element at index i is the smallest*/
		min_index = i;

		/*Search in the rest of the table (to the right of i)*/
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_index])
				min_index = j;
		}

		/*If a smaller element was found, it is exchanged*/
		if (min_index != i)
		{
			temp = array[i];
			array[i] = array[min_index];
			array[min_index] = temp;
			print_array(array, size);
		}
	}
}
