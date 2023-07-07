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
	hash_node_t *item = malooc(sizeof(hash_node_t));

	x = malloc(sizeof(key) + 1);
	z = malloc(sizeof(value) + 1);
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
	if (ht == NULL || key == NULL)
		return (0)
	char *x, *z
	unsigned long int index = key_index(key, size);

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
			hash_node_t *item = malooc(sizeof(hash_node_t));

			x = malloc(sizeof(key) + 1);
			z = malloc(sizeof(value) + 1);
			if (item == NULL || x == NULL || z == NULL)
				return (0);
			strcpy(x, key);
			strcpy(z, value);
			item->key = x;
			item->value = z;
			item->next = NULL;
			ht->array[index]->next = item;
			return (1);
		}
	}
}
