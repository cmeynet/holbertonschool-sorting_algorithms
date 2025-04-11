#include "sort.h"

/**
 * swap_node - Swaps two nodes
 * @a:first pointer to a node
 * @b: second pointer to a node
 *
 * Return: nothing
 */
void swap_node(listint_t **list, listint_t *a, listint_t *b)
{
	listint_t *temp = a->prev;

	if (a->prev)
	{
		a->prev->next = b;
	}
	else
	{
		*list = b; /*updating head of the list*/
	}

	if (b->next)
	{
		b->next->prev = a;
	}

	/*Swapping the pointers between a and b*/
	a->prev = b;
	a->next = b->next;

	b->prev = temp;
	b->next = a;
}


/**
 * reposition_node - Moves a node to its correct position in the list.
 * @list: Pointer to the head of the list.
 * @current: Pointer to the current node to reposition.
 *
 * Return: Nothing.
 */
void reposition_node(listint_t **list, listint_t **current)
{
    listint_t *temp;

    while ((*current)->prev && (*current)->n < (*current)->prev->n)
    {
        temp = (*current)->prev;
        swap_node(list, temp, *current);
        print_list(*list);
        *current = temp;
    }
}


/**
 * insertion_sort_list - Sorts a doubly linked list using insertion sort.
 * @list: Pointer to the head of the list.
 *
 * Return: Nothing.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current;

	/* Safety check: if list is empty or has only one element, do nothing */
	if (!list || !*list || !(*list)->next)
		return;

	current = (*list)->next;

	while (current != NULL)
	{
		if (current->prev && current->n < current->prev->n)
		{
			reposition_node(list, &current);
		}
		else
		{
			current = current->next;
		}
	}
}