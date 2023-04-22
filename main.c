#include <stdio.h>
#include "include/stack.h"
#include "include/ft_pushswap.h"


// small test will be made here 
// to be sure the functions work as they need to
// Using -g flags while compiling to debug with lldb.

int main() {
	int array[10] = {1,2,3,4,5};
	int arrayB[5] = {1,2,3,4,5};
	// size_t length = sizeof(array) / sizeof(array[0]) - 1;
	size_t length = 5;
	t_stack data = {
		.stack = array, 
		.top = length - 1, 
		.size = length
	};
	t_stack data2 = {
		.stack = arrayB,
		.top = length - 1, 
		.size = length;
	};
	Push(&data, &data2);
	Push(&data, &data2);
	Push(&data, &data2);
	Push(&data, &data2);
	Push(&data, &data2);
	int i = 0;
	while (i < data.size)
	{
		printf("%d", data.stack[i]);
		i++;
	}
	i = 0;
	printf("\n");
	while (i < data2.size)
	{
		printf("%d", data2.stack[i]);
		i++;
	}
	return (0);
}
