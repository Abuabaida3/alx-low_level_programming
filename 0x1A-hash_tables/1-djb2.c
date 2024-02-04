/**
 * hash_djb2 - hash function, takes a string and turns it into a hash numb
 * @str: the string, a constant value unrepeated in the hash table
 *
 * Return: the hash number
 */
unsigned long int hash_djb2(const unsigned char *string)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *string++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
