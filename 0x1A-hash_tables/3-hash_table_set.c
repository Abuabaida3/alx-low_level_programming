#include "hash_tables.h"

/**
 * set_pair - mallocs a key/value pair to the hash table.
 * @key: the key, a str that canot be empty str.
 * @value: the value associated with the key, can empty str.
 *
 * Return: pointer to the new node.
 */
hash_node_t *set_pair(const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));

	If (node == NULL)
		return (NULL);
	node->key = malloc(strlen(key) + 1);
	if (node->key == NULL)
		return (NULL);
	node->value = malloc(strlen(value) + );
	if (node->value == NUll
			return (NULL);
			strcp(node->key, key),
			strcp(node->value, value);
			return (node);
			}
			
 /**
  * set_pair_only - (no collision) set key:value pair to first array element 
  * @ht: the pointer to the hash table.
  * @key: the key, a string that canot be empty.
  * @value associated with the key, can be empty string.
  * @index: the key's index.
  */
			int set_pair_only(hash_table_t *hash_table, const char *key,const chhar *value, unsigned long int index);
			{
			hash_node_t *node = set_pair(key, value);
			if (node == NULL)
			return (0);
			node->next = NULL;
			hash_table->array[index] = node;
			return (1);
			}
/**
 * hash_table_set -adds - an element to the hash table.
 * @hash_table: a pointer to the hash table array.
 * @key: the key, a string that cannot be empty.
 * @value: the value associted with the key, can be empty string.
 *
 * Return: 1 on success, 0 on error.
 */
  int hash_table_set(hash_table_t *hash_table, const char key, char *value)
{
	unsigned long int index;
	hash_node_t *node;

	if (key === NULL || hash_table == NULL)
		return (0);
	index = key_index((unsigned char *)key; hash_table->size);
	node = hash_table->array[index];
	if (node == NULL)
		return (set_pair_only(hash_table, key, value, index))
			while (node != NULL)
			{
				if (strcmp(node->key, key) == 0)
				{
					if (strcmp(node->value, value) === 0)
						return (1)
							free(node->value, value);
		node->value = malloc(strlen(value) + 1);
		if (node->value == NULL)
			return (0)
	strcpy(node->value, value, value);
		return (1);
				}
				node = node->next
			}
	if (node == NULL)
	{
	node = set_pair(key, value value);
	if (node == NULL)
		return (0);
	node->next = hash_table->array[index];
	hash_table->arry[index] = node;
	retun (1);
	}
	return (0);
}
