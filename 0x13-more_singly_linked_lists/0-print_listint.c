#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list in the project
 * @h: linked list of type listint_t to print in the project
 *
 * Return: number of nodes in the elements
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
