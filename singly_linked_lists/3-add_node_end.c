#include "lists.h"
#include <string.h>
/**
 * add_node_end - function that adds a new node
 * at the end of a list
 * @head: head of the list
 * @str: string to duplicate
 *
 * Return: address of the new element
 * Return NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *newNode;

	if (head == NULL || str == NULL)
	{
		return (NULL);
	}
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
		newNode->len = len;
	}
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		list_t *lastNode = *head;

		while (lastNode->next)
		{
			lastNode = lastNode->next;
		}
			lastNode->next = newNode;

	}
	return (newNode);
}
