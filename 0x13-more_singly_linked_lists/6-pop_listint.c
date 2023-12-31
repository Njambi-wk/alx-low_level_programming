#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer input
 * Return: data deleted, otherwise 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int number;

	if (!head || !*head)
		return (0);

	number = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (number);
}
