#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - function that deletes the node
 * at a given position in a list
 * @head: head of the list
 * @index: position of the node to delete
 *
 * Return: 1 if success
 * Return -1 if it fails
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = current->next;
	}
	for (i = 0; current != NULL && i < index; ++i)
	{
		current = current->next;
	}
	if (current == NULL)
	{
		return (-1);
	}
	if (current->prev != NULL)
	{
		current->prev->next = current->next;
	}
	if (current->next != NULL)
	{
		current->next->prev = current->prev;
	}

	free(current);
	return (1);
}
