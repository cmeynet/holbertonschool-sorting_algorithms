#include "sort.h"

/**
 * swap_node - Swaps two node
 * @a:first pointer to a node
 * @b: second pointer to a node
 *
 * Return: Swapped values
 */

 void reposition_node(listint_t **list, listint_t **current)
 {
	while ((*current)->prev && (*current)->n < (*current)->prev->n)
	{
		swap();
		print_list(*list);
		*current = (*current)->prev; 
	}
}

void insertion_sort_list(listint_t **list)
{
	/*listint_t *current = (*list)->next;*/
	listint_t *current = *list;
	current = current->next;

	while(current != NULL)
	{
		if (current->prev && current->n < current->prev->n)
		{
			reposition_node(list, &current);
		}
		current = current->next;
	}
}