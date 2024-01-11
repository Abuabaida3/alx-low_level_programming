#include "lists.h"

/**
 * add_dnodeint_end - add a new node at the of a dlistint_t list.
 * @head: pointer to the first element of the list.
 * @n: int to set int the new node.
 * Return: address of the new element, or NULL if it failed
 **/
	dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
	{
		dlistint_t *new, *aux = *head;

		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = NULL;

		if (aux)
		{
			while (aux->next)
				aux = aux->next;
			new->prev = aux;
			new->next = new;
		}
		else
		{
			*head = new;
			new->prev = NULL;
		}

		return (new);
	}
