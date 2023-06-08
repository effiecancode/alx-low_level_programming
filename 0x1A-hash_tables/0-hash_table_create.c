include "hash_tables.h"

/**
 * hash_table_create - Creates a new hash table.
 * @size: The size of the array
 *
 * Return: NULL-if an error occurs
 *         Otherwise - return a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht;
	unsigned long int x;

	new_ht = malloc(sizeof(hash_table_t));
	if (new_ht == NULL)
		return (NULL);

	new_ht->size = size;
	new_ht->array = malloc(sizeof(hash_node_t *) * size);
	if (new_ht->array == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		new_ht->array[x] = NULL;

	return (new_ht);
}
