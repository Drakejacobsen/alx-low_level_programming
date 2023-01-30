#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Add a new node at the beginnning of a list.
 * @head: Address ogf the first node of a list.
 * @n: Integer to insert into the new node.
 * Return: Address of the new node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tp;

	tp = malloc(sizeof(list_int));
	if (tp == NULL)
		return (NULL);

	tp->n = n;
	tp->next = *head;
	*head = tp;
	return (*head);
}
