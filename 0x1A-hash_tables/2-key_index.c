#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: the key of our data
 * @size: size of the array that will store keys paired with their data
 * Return: index of the key in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
