#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_dnodeint - function that adds a new
 * node at the beginning of a list
 * @head: head of the list
 * @n: integer
 *
 * Return: the address of the new element
 * Return NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = *head;
	if (*head != NULL)
	(*head)->prev = newNode;
	*head = newNode;

	return (newNode);
}
