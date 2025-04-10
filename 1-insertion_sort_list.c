#include "sort.h"

/**
 * swap_node - Swaps two node
 * @a:first pointer to a node
 * @b: second pointer to a node
 *
 * Return: Swapped values
 */

 void swap_node()
 {
	
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
			//swap;
		}	
	}


}