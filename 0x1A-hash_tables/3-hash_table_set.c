#include"hash_tables.h"
/**
 * c_item - creates a hash item
 * @key: key of the iteem
 * @values: value of the item
 *
 * Return: pointer of the item
 */
hash_node_t *c_item(const char *key, const char *values)
{
	char *k, *v;
	hash_node_t *node = malloc(sizeof(hash_node_t));

	k = malloc(strlen(key) + 1);
	v = malloc(strlen(values) + 1);
	strcpy(k, key);
	strcpy(v, values);
	node->key = k;
	node->value = v;
	node->next = NULL;
	return (node);
}
/**
 * hash_table_set - inserting an item
 * @ht: pointer of the hash table
 * @key: jey of the item
 * @value: value of the item
 *
 * Return: 0 or 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *current_node, *node;

	if (ht == NULL || key == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	current_node = ht->array[index];
	if (current_node == NULL)
	{
		node = c_item(key, value);
		if (node == NULL)
			return (0);
		ht->array[index] = node;
		return (1);
	}
	else if (strcmp(current_node->key, key) == 0)
	{
		strcpy(current_node->value, value);
		return (1);
	}
	else
	{
		node = c_item(key, value);
		if (node == NULL)
			return (0);
		node->next = ht->array[index];
		ht->array[index] = node;
		return (1);
	}
}
