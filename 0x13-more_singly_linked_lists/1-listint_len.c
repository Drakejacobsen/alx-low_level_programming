#include "lists.h"
/**
 * listint_len - Calculate the numebr of elements.
 * @h: Pointer to a list.
 * Return: Integer.
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *tp;
	unsigned int cnr = 0;

	tp = h;
	while (tp)
	{
		cnr++;
		tp = tp->next;
	}
	return (cnr);
}
