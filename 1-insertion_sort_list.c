#include "sort.h"

/**
 * swap_int - Prints the last digit of a number.
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

void insertion_sort_list(listint_t **list)
{
	/*listint_t *current = (*list)->next;*/
	listint_t *current = *list;
	current = current->next;

	while(current->next != NULL)
	{
		if (current > current->next)
		{
			swap;
		}	
	}


}