#include "lists.h"
#include <stdlib.h>
/**
 * sum_dlistint - function that prints the sum of
 * all the data of a list
 * @head: head of the list
 *
 * Return: Sum of all the data
 * Return 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	if (current == NULL)
	{
		return (0);
	}
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
