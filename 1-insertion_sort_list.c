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
	listint_t *current, *after;

	if (!(*list) || !(*list)->next)
		return;

	current = (*list)->next;

	while (current != NULL)
	{
		after = current->next;

		while (current->prev && current->n < current->prev->n)
		{
			listint_t *a = current->prev;
			listint_t *b = current;

			if (a->prev)
				a->prev->next = b;
			else
				*list = b;/*b become the head of the list*/

			/*Connect tje node after 'b' to 'a'*/
			if (b->next)
				b->next->prev = a;

			/*Exchange between a and b*/
			a->next = b->next;
			b->prev = a->prev;
			b->next = a;
			a->prev = b;

			print_list(*list);
		}
		current = after;
	}
}
