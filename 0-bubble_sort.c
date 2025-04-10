#include "sort.h"
/**
 * bubble_sort - Function that sorts an array of integers
 * in ascending order using the Bubble sort algorithm
 * @array: Array of integers to sort
 * @size: number of integers
 *
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t i;
	int if_swap = 1;

	while (if_swap != 0)
	{
		if_swap = 0; /*Reset to indicate no swaps yet*/

		/*To ensure that i + 1 is always a valid index,limit it to size - 1*/
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				if_swap = 1; /*If a swap is made*/
				print_array(array, size);
			}
		}
	}
}
