#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - function that inserts a new node
 * at a given position
 * @h: head of the list
 * @idx: index where the node will be added
 * @n: data
 *
 * Return: address of the new node
 * Return NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp = *h;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
	return (NULL);
	}
	new->n = n;
	new->prev = new->next = NULL;

	if (!*h)
	{
		*h = new;
		return (new);
	}
	if (idx == 0)
	{
		new->next = *h;
		(*h)->prev = new;
		*h = new;
		return (new);
	}
	while (temp)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			new->prev = temp;
			if (temp->next)
				temp->next->prev = new;
			temp->next = new;
			return (new);
		}
		temp = temp->next;
		i++;
	}
	free(new);
	return (NULL);
}
