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
 * lomuto_partition - Partitions the array using Lomuto scheme.
 * @array: Array to partition.
 * @low: Starting index.
 * @high: Ending index.
 * @size: Size of the array.
 *
 * Return: Index of the pivot after partition.
 */
int lomuto_partition(int *array, int low, int high, size_t size)
{
	int j;
	int i = low - 1;
	int pivot = array[high];

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swap_int(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	if (i + 1 != high)
	{
		swap_int(&array[i + 1], &array[high]);
		print_array(array, size);
	}
		return (i + 1);
}


/**
 * sort_low_high - Recursively sorts sub-arrays.
 * @array: Array to sort.
 * @low: Starting index.
 * @high: Ending index.
 * @size: Size of the array.
 *
 * Return: Nothing.
 */
void sort_low_high(int *array, int low, int high, size_t size)
{
	if (low < high)
	{
		int pivot_index = lomuto_partition(array, low, high, size);

		sort_low_high(array, low, pivot_index - 1, size);
		sort_low_high(array, pivot_index + 1, high, size);
	}
}

/**
 * quick_sort - Sorts an array of integers using the Quick sort algorithm.
 * @array: Array to sort.
 * @size: Size of the array.
 *
 * Return: Nothing.
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	sort_low_high(array, 0, size - 1, size);
}
