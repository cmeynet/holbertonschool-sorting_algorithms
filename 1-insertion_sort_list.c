#include "sort.h"
/**
 * insertion_sort_list - Function that sorts a doubly linked list
 * of integers in ascending order using the Insertion sort algorithm
 * @list: Double linked list to sort
 *
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current = *list;
	listint_t *before = current->prev->prev;
	listint_t *after = current->prev;

	while (*list && current == (*list)->next)
	{
		if ((*list)->next == NULL)
		{



		}
		
		if (current->prev->n > current->n)
		{
			if ((*list)->prev == NULL)
			{
				current->prev = NULL;
				current->next = after->next;
				after->prev = current;
			}

			current->prev = before;
			before->next = current;
			current->next = after->next;
			after->prev = current;

			/*if ((*list)->next != NULL)
			{
				current->prev = before;
				before->next = current;
				current->next = NULL;
			}*/
			print_list(*list);
		}
		current = current->next;
	}
}
