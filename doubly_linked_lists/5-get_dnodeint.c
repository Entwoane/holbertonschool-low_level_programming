#include "lists.h"
#include <stdlib.h>
/**
 * get_dnodeint_at_index - function that returns the nth
 * node of a list
 * @head: head of the list
 * @index: index of the node, starting from 0
 *
 * Return: the nth node of the list
 * Return NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int i = 0;

	for (i = 0; i < index; i++)
	{
		if (temp == NULL)
		{
			return (NULL);
		}
		temp = temp->next;
	}
	return (temp);
}
