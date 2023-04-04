#include "lists.h"

/**
 * listint_len - indicates the number of elements in a linked listint_t list.
 *
 * @h: head pointer
 *
 * Return: the number of elements to returnd
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	h = h->next;
		count++;
	}
	return (count);
}
