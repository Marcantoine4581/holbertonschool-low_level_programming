#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * hash_table_print - function that prints a hash table.
 * @ht: the hash table.
 * rint the key/value in the order that they appear in the array of hash table.
 * Order: array, list.
 * Return: nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	char coma = 0;

	printf("{");
	for (i = 0; ht && i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (coma == 1)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			coma = 1;
		}
	}
	printf("}\n");
}
