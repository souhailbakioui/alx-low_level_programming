#include "lists.h"
#include <string.h>

/**
 * add_node - a function that adds a new node at
 * the beginning of a list_t list.
 * @head: pointer to the first node of the list
 * @str: string to be duplicated
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = i;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
