#include "lists.h"
#include <stdlib.h>
/**
 * add_node - adds node at the beginning
 * @head: head of node
 * @str: string input
 * Return: address of new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnodes;
	unsigned int i, count = 0;

	newnodes = malloc(sizeof(list_t));

	if (newnodes == NULL)
	{
		return (NULL);
	}
	newnodes->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}
	newnodes->len = count;
	newnodes->next = *head;
	*head = newnodes;

	return (*head);
}
