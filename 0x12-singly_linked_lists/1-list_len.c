#include "lists.h"
/**
 * list_len - returns number of elements in a list
 * @h: head
 * Return: node length
 */
size_t list_len(const list_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		h = h->next;
		node++;
	}
	return (node);
}
