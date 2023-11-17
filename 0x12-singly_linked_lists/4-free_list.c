#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees list_t
 * @head:head of the list
 * Return: always 0
 */
void free_list(list_t *head)
{
	list_t *newnodes;

	while ((newnodes = head) != NULL)
	{
		head = head->next;
		free(newnodes->str);
		free(newnodes);
	}
}
