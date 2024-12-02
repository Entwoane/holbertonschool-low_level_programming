#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - function that prints all the elements of list_l
 * @h: Head of the list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int len = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] (nil)\n", 0);
		}
		else
		{
		printf("[%d] %s\n", h->len, h->str);
		}
		len++;
		h = h->next;
	}

	return (len);
	_putchar('\n');
}
