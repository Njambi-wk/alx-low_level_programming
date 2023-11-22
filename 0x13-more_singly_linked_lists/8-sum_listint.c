#include "lists.h"
#include <stdio.h>
/**
 * sum_listint - returns the sum of all the data (n) of al inkedlist
 * @head: node input
 * Return: sum, 0 if empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
