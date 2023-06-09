#include "hash_tables.h"
/**
 * hash_table_create - function
 *@size: size
 *Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = calloc(size, sizeof(long));
	return (table);
}
