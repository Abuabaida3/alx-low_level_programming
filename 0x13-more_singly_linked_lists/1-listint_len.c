#include "lists.h"

/**
 * listtint_len - find the number of elements of a linked listint_t list
 * @h: linked list head
 * Return: number of elements in linked list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *c;
	size_t count;

	for (c = h, count = 0; c != NULL; count++, c = c->next)
		;
	return (count);
}
