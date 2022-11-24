#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: he hash table you want to add or update the key/value to.
 * @key: the key. key can not be an empty string.
 * @value: the value associated with the key.
 * value must be duplicated. value can be an empty string.
 * In case of collision, add the new node at the beginning of the list
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *value_copy;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	value_copy = strdup(value);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		free(ht->array[i]->value);
		ht->array[i]->value = value_copy;
		return (1);
	}

	new = malloc(sizeof(hash_node_t));
	new->key = strdup(key);
	new->value = value_copy;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
