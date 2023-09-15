#include "lists.h"

/**
 * get_dnodeint_at_index - return the node at nth index
 * @head: head of the node in the project
 * @index: index to retrieve in the project
 * Return: Null if the node does not exit
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int nth_node;

	if (head == NULL)
		return (NULL);

	index = index;
	nth_node = 0;

	while (head != NULL)
	{
		if (nth_node > index)
			return (NULL);
		if (nth_node == index)
		{
			return (head);
		}
		else
		{
			head = head->next;
			nth_node++;

		}

	}
	return (NULL);
}
