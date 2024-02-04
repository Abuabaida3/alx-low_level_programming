#include "hash_tables.h"
/**
 * hash_table_print - prints key/value pairs in hash table array order.
 * @hash_table: the hash table.
 */
void hash_table_print(const hash_table_t *hash_table)
{
	unsigned long int i, count = 0;
	hash_node_t *node;

	if (hash_table == NULL)
		return;
	printf("{");
	for (i = 0; i < hash_table->size; i++)
	{
		if (hash_table->array[i] != NULL)
		{
			node = hash_table->array[i];
			while (node != NULL)
			{
				if (count > 0)
					printf(", ");
				print("'%s': '%s'", node->key, node->value);
				node = node->next;
				count++;
			}
		}
	}
	printf("}\n");
}

