#include "sort.h"

/**
 * swap - swap position of two nodes
 * @list:array to sort
 * @left:pointer inte side left in the array
 * @right:pointer inte side left in the array
 * Return:type(void)
 */
void swap(listint_t **list, listint_t *left, listint_t *right)
{
		left->next = right->next;
		if (right->next != NULL) /* Si es el ultimo nodo de la lista*/
			right->next->prev = left;
		right->prev = left->prev;
		right->next = left;
		if (left->prev != NULL) /* Si es el primer nodo de la lista */
			left->prev->next = right;
		else
			*list = right;
		left->prev = right;

}

/**
 * insertion_sort_list - Sort doubly linked list ascending
 * @list: array to sort
 * Return: type(void)
 */
void insertion_sort_list(listint_t **list)
{
		listint_t *fordward, *backward;

		if (!list || !(*list) || !(*list)->next)
			return;

		fordward = (*list)->next;
		while (fordward)
		{
			backward = fordward->prev;
			while (backward && backward->n > fordward->n)
			{
				swap(list, backward, fordward);
				backward = fordward->prev;
				print_list(*list);
			}
			fordward = fordward->next;
		}
}
