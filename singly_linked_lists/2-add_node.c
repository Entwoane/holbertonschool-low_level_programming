#include "lists.h"
#include <string.h>
/**
 * add_node - function that adds a node at
 * the beginning of a list
 *@head: head of the list
 *@str: string to duplicate
 *
 * Return: Address of the new element
 * Return NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;

	list_t *newNode = malloc(sizeof(list_t));

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
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
