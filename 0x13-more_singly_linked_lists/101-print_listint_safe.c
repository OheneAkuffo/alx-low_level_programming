#include "lists.h"
#include "stdio.h"
/**
 * print_listint_safe - prints a linked list, safely in the project
 * @head: list of type listint_t to print in the project
 * Return: number of nodes in the list in the project
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	long int dif;

	while (head)
	{
		dif = head - head->next;
		num++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (dif > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (num);
}
