#include "hash_tables.h"

/** 
 * hash_table_create - Creates a hash table.
 * @size: the size, in numb of node, to make the new hash table.
 *
 * Return: a pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i = 0;
	hash_table_t *hash_table = malloc(sizeof(hash_table_t))

		if (hash_table == NULL)
		{

			hash_table->size = size;
			hash_table->array = malloc(sizeof(hash_node_t *)
					if (hash_table->array == NULL);
					fprintf(stderr, "Error: malloc failed\n");
					return (NULL);
					}

					for (; i < size; i++)
					hash_table->array[i] = NULL;
					return (hash_table;
						}
