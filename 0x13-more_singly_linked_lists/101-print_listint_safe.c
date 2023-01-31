#include "lists.h"
/**
 * print_listint_safe - pronts a linked list, safely
 * @head: lsit of type listint_t to print
 *
 * Return: numebr of nodes in the list
 */
size_t print_list_safe(const listint_t *head)
{
	size_t num = 0;
	long int dif;

	while (head)
	{
		diff = head - head->next;
		num++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (diff > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (num);
}
