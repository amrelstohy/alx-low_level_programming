#include "hash_tables.h"
/**
 * mall - creates a hash item
 * @key: key of the iteem
 * @value: value of the item
 *
 * Return: pointer of the item
 */
hash_node_t *mall(const char *key, const char *value)
{
	char *x, *z;
	hash_node_t *item = malloc(sizeof(hash_node_t));

	x = malloc(strlen(key) + 1);
	z = malloc(strlen(value) + 1);
	strcpy(x, key);
	strcpy(z, value);
	item->key = x;
	item->value = z;
	item->next = NULL;
	return (item);
}
/**
 * hash_table_set - function
 * @ht: table
 * @key: key
 * @value: value
 *
 * Return: succes
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *item = malloc(sizeof(hash_node_t));

	if (ht == NULL || key == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
	{
		item = mall(key, value);
		if (item == NULL)
			return (0);
		ht->array[index] = item;
		return (1);
	}
	else
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			strcpy(ht->array[index]->value, value);
			return (1);
		}
		else
		{
			item = mall(key, value);
			if (item == NULL)
				return (0);
			item->next = ht->array[index];
			ht->array[index]->next = item;
			return (1);
		}
	}
}
