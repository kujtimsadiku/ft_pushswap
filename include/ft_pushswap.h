# ifndef FT_PUSHSWAP_H
	# define FT_PUSHSWAP_H
		# include "../libft/includes/libft.h"
		# include <sys/types.h>
    	# include <sys/uio.h>
		# include <stdio.h>
		# include "stack.h"

		// Actions
		# define sa	"sa"
		# define sb	"sb"
		# define ss	"ss"
		# define ra	"ra"
		# define rb "rb"
		# define rr "rr"
		# define rra "rra"
		# define rrb "rrb"
		# define rrr "rrr"
		# define pa	"pa"
		# define pb "pb"

		# define TRUE 1
		# define FALSE 0

		// Check MAX_INT AND MIN_INT
		# define MAX_INT 2147483647
		# define MIN_INT -2147483648
		// Function order defined to be get easy access and more secure
		// Trying to implement c++ stack way.
		# define PUSH 0
		# define SWAP 1
		# define ROTATE 2
		# define REVERSEROTATE 3
		# define POP 4

		# define HASH_TABLE_SIZE 1000

		typedef struct		s_data
		{
			int i;
			int stackMemory;
			int divide;
		} t_data;

		typedef struct HashNode
		{
			struct HashNode *next;
			int value;
		}	HashNode;

		typedef struct HashTable
		{
			struct HashNode **buckets;
			int size;
		}	HashTable;
		

		void	InitializeStack(t_data *data);
		int		IsNumber(int ac, char **av);
		void	MemoryAllocation(t_data *data);
		void	STDInputError(char *error);
		void	ReadSTDInput(t_data *data, int ac, char **av);
		void	FillTheStack(int ac, char **av);

		int		Max(int maxMin, int maxMax);

		int		containsDuplicate(int* nums, int size);
		void	insertValue(HashTable* hashTable, int value);
		// unsigned int hashFunction(int value);
		HashTable* createHashTable(int size);
		
#endif