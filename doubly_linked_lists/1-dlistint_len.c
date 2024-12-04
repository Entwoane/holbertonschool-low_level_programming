#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * dlistint_len - function that returns the number
 * of elements in a linked list
 * @h: head of the list
 *
 * Return: number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
