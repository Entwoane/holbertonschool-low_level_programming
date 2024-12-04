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
	dlistint_t *temp;
	dlistint_t *newNode;
	dlistint_t *curr = *h;
	unsigned int len = 0;
	unsigned int i;

	if (idx < 1)
	{
		return (NULL);
	}
	while (curr != NULL)
	{
		len++;
		curr = curr->next;
	}
	newNode = malloc(sizeof(dlistint_t));
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;
	if (newNode == NULL)
	{
		return (NULL);
	}
	if (idx == 1)
	{
		newNode->next = *h;
		(*h)->prev = newNode;
		*h = newNode;
	}
	else if (idx == len)
	{
		temp = *h;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newNode;
		newNode->prev = temp;
	}
	else 
	{
		temp = *h;
		for (i = 1; i < idx; i++)
		{
			temp = temp->next;
		}
		newNode->next = temp->next;
		temp->next->prev = newNode;
		newNode->prev = temp;
		temp->next = newNode;
	}

	return (newNode);
}
