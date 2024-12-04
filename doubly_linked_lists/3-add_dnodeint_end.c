#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_dnodeint_end - function that adds a node
 * at the end of the list
 * @head: head of the list
 * @n: integer
 *
 * Return: the address of the new element
 * Return NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *end;

	newNode = malloc(sizeof(dlistint_t));

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
	}
	else
	{
		end = *head;
		while (end->next != NULL)
		{
			end = end->next;
		}
		end->next = newNode;
		newNode->prev = end;
	}
	return (newNode);
}
