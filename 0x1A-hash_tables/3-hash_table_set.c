#include "hash_tables.h"
/**
 *mall - function
 *@key: key
 *@value: value
 *
 *Return: succes
 */
hash_node_t *mall(const char *key, const char *value)
{
	char *x, *z;
	hash_node_t *item = malloc(sizeof(hash_node_t));

	x = malloc(strlen(key) + 1);
	z = malloc(strlen(value) + 1);
	if (item == NULL || x == NULL || z == NULL)
		return (NULL);
	strcpy(x, key);
	strcpy(z, value);
	item->key = x;
	item->value = z;
	item->next = NULL;
	return (item);
}
/**
 * hash_table_set - function
 * @key: key
 * @value: value
 * @ht: table
 *
 * Return: succes
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *z;
	hash_node_t *item = malloc(sizeof(hash_node_t));

	if (ht == NULL || key == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = mall(key, value);
		return (1);
	}
	else
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			z = malloc(sizeof(value) + 1);
			strcpy(z, value);
			ht->array[index]->value = z;
			return (1);
		}
		else
		{
			item = mall(key, value);
			item->next = ht->array[index];
			ht->array[index]->next = item;
			return (1);
		}
	}
}
