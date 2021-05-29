#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: pointer to the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index, last_index;
	hash_node_t *node;

	if (!ht)
		return;
	if (!ht->array)
	{
		printf("{}\n");
		return;
	}
	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index])
			last_index = index;
	}
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index])
		{
			node = ht->array[index];
			while (node)
			{
				if (!node->next && index == last_index)
				{
					printf("\'%s\': \'%s\'}\n", node->key, node->value);
				return;
				}
				printf("\'%s\': \'%s\', ", node->key, node->value);
				node = node->next;
			}
		}
	}
}
