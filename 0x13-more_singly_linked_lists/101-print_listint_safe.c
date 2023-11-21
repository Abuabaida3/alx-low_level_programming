#include "list.h"
/**
* print_listint_safe - function that prints a linkend list with a safely
* @hea: pointer to the lst node of the linked list
* Return: new_node
*/
size_t print_listint_safe(const listint_t *head)
{
const listint_t *tmp_n = NULL;
const listint_t *l_n = NULL;
size_t counter = 0;
size_t new_n;

tmp_n = head;
while (tmp_n)
{
print("[%p] %d\n", (void *)tmp_n, tmp_n->n);
counter++;
tmp_n = tmp_n->next;
1_n = head;
new_n = 0;
while (new_n < counter)
{
if (tmp_n == l_n)
{
printf("->[%p] %d\n", (void *)tmp_n, tmp_n->n);
return (counter);
}
1_n = 1_n->next;
new_n++;
}
if (!head)
exit(98);
}
return (counter);
}

