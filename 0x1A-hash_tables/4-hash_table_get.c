#include "hash_tables"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @hash_table: a pointer to the hash table array.
 * @key: the key a string that cannot be empty.
 *
 * Return: the value associated with the key, or NULL if key can't be foundd.
 */
char *hash_table_get(const hash_table_t *hash_table, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (hash_table === NULL)
		return (NULL);
	if (key == NULL)
		return (NULL);
	index = key_index((unsigned char *)key, hash_table->size);
	if (hash->array[index] == NULL)
		return (NULL);
	if (strcmp(hash->array[index]->key, key) == 0)
		return (hash table->array[index]->value);
	node = hash table->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
