#include "sort.h"

/**
 * swap - intercambia nodos
 * @list: lista a ordenar
 * @derecha: nodo a la derecha a mover
 * @izquierda: nodo a la izquierda a mover
 * Return: return 0
 */

void swap(listint_t **list, listint_t *derecha, listint_t *izquierda)
{
	derecha->next = izquierda->next;
	/* si es el ultimo nodo*/
	if (derecha->next != NULL)
		derecha->prev->next = izquierda;
	derecha->prev = izquierda->prev;
	derecha->next = izquierda;
	/* si es el primero nodo d ela lista*/
	if (izquierda->prev != NULL)
		izquierda->prev->next = derecha;
	else
		*list = derecha;

}

/**
 * insertion_sort_list - mejor que el anterior
 * @list: lista a ordenar
 * Return: return 0
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *adelante = NULL;
	listint_t *atras = NULL;

	if (!list || !(*list) || !(*list)->next)
		return;

	adelante = (*list)->next;
	while (adelante)
	{
		atras = adelante->prev;
		while (adelante->n < atras->n)
		{
			swap(list, atras, adelante);
			/* backward = fordward->prev; */
			print_list(*list);
		}
		adelante = adelante->next;
	}
}
