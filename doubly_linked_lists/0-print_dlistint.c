#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dlistint - function that prints all
 * the elements of a list
 * @h: head of the list
 *
 * Return: number of node
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
