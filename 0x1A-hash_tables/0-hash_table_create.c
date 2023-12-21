#include "hash_tables.h"
#include <stdlib.h>

/**
* hash_table_create - creates a hash table.
* @size: size of the array.
*
* Return: poiter to the nrew array or
*          Null if it fails/error occurs.
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht;

	
	new_ht = malloc(sizeof(hash_table_t));
	if (new_ht == NULL)
		return (NULL);
	
	new_ht->array = calloc(size, sizeof(hash_table_t *));
	if (new_ht->array == NULL)
	{
		free(new_ht);
		return (NULL);
	}

	new_ht->size = size;

	return (new_ht);
}

