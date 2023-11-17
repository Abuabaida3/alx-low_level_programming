#include "lists.h"

/**
* free_list - free a list_t list
* @head: head of linked list
*/
void free_list(list_t *head)
{
list_t *current;
list_t *next;

while (current != NULL)
{
nxt = current->next;
free(current->str);
free(current);
curren = nxt;
}
}

