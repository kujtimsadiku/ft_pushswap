#include "../include/ft_pushswap.h"

/*
	Checking with hashtable that the there isnt same value at the stack
	it takes O(n) 
	we use malloc and calloc in this one. 
	Calloc does same as malloc expect it assign everythng to 0
*/
HashTable* createHashTable(int size)
{
	HashTable *hashTable = (HashTable *)malloc(sizeof(HashTable));
	hashTable->buckets = (HashNode **)calloc(size, sizeof(HashNode *));
	hashTable->size = size;
	return (hashTable);
}

// Use a simple hash function 
// that maps the value to an index in the hash table
// Lets keep this here for debugging. 
// unsigned int hashFunction(int value)
// {
// 	printf("the value of = %u\n", value);
// 	return ((unsigned int)(value % HASH_TABLE_SIZE));
// }

void	insertValue(HashTable* hashTable, int value)
{
	// unsigned int hash = hashFunction(value);
	unsigned int hash = value % HASH_TABLE_SIZE;

	HashNode *node = hashTable->buckets[hash];
	while (node != NULL)
	{
		if (node->value == value)
			STDInputError("Duplicated -- 1!");
		node = node->next;
	}
	node = (HashNode *)malloc(sizeof(HashNode));
	node->value = value;
	node->next = hashTable->buckets[hash];
	hashTable->buckets[hash] = node; 
}

int	containsDuplicate(int* nums, int size)
{
	HashTable *hashTable = createHashTable(HASH_TABLE_SIZE);
	int	i;

	i = 0;
	while (i < size)
	{
		if (nums[i] == MAX_INT)
			return (TRUE);
		insertValue(hashTable, nums[i]);
		i++;
	}
	i = 0;
	while (i < HASH_TABLE_SIZE)
	{
		HashNode *node = hashTable->buckets[i];
		while (node != NULL)
		{
			HashNode *nextNode = node->next;
			free(node);
			node = nextNode;
		}
		i++;
	}
	free(hashTable->buckets);
	free(hashTable);
	return (FALSE);
}