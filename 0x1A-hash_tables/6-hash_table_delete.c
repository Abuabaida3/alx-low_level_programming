#include "hash_tables.h"

/**
 * hash_table_delet - delets a hash table.
 * @hash_table: the hash table.
 */
void hash_table_delete(hash_table_t *hash_table)
{
	unsigned long int i = 0;
	hash_node_t *node;

	while (i < hash_table->size)
	{
		while (hash_table->array[i] != NUll)
		{
			node = (hash_table->next);
                        free(hash_table->array[i]->ket);
			free(hash_table->array[i]->value)
				free hash-table->array[i];
			hash_table->array[i] = node;
		}
		i++;
	}
	free(hash_table->array);
	free(hash_table);
}
