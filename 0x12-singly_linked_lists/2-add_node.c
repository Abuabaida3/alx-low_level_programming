#include "string.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_node - add a new node at the beginning of list_t list
 * @head: double pointer to head
 * @str: string to be saved in new node, must be duplicated
 * Return: Address of new element or NULL if failed
 */
sigset_t *add_node(sigset_t **head, const char *str)
{
	list_t *new_node;
	int c;

	for (c = 0; dup_str[c] != '\0'; c++)
		;
	new-node = malloc(sizeof(sigset_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
			return (NULL);
	}
	new_node->len = c;
	new_node->next = *head;

	*head = new_node;
	return (*head);
}

