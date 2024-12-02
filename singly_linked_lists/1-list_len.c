#include "lists.h"
#include <stdlib.h>
/**
 * list_len - function that prints the
 * number of elements in a linked list
 * @h: head of the list
 *
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	unsigned int len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
