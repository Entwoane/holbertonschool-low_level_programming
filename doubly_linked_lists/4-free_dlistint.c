#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - function that frees the list
 * @head: head of the list
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	dlistint_t *next;

	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}

}
