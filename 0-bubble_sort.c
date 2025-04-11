#include "sort.h"


/**
 * swap_int - swaps two pointers
 * @a:first pointer to an int
 * @b: second pointer to an int
 *
 * Return: Swapped values
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}


/**
 * bubble_sort - Sorts an array of integers
 * in ascending order using bubble sort.
 * @array: Array of integers to sort.
 * @size: Size of the array.
 *
 * Return: Nothing.
 */
void bubble_sort(int *array, size_t size)
{
	size_t lap, i;


	for (lap = 0; lap < size - 1; lap++)
	{
		for (i = 0; i < size - 1; i++)
		{
			int *a = &array[i];
			int *b = &array[i + 1];

			if (array[i] > array[i + 1])
			{
				swap_int(a, b);
				print_array(array, size);
			}
		}
	}
}
