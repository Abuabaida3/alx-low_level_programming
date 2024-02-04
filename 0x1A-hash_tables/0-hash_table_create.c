#include "hash_tables.h"

/** 
* hash_table_create - Creates a hash table.
* @size: size of the arrray.
*
* Return: a pointer to hash table's new node, or NULL if somethong was wrong.
*/
hash_table_t *hash_table_create(unsigned long int size)
{
unsigned long int i = 0;
hash_table_t *hash_table = malloc(sizeof(hash_table_t))

if(!new_node)
return (NULL);

new_node->size = size;
hash_table-size =ble->array = malloc(sizeof(hash_node_t **) * size);
if (!new_node->)
{
	free(new_node);
return (NULL);
}

for (i = 0; i < size; i++)
new_node->array[i] = NULL;
return (new_node);
}
