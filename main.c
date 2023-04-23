#include "include/ft_pushswap.h"
#include <stdio.h>

// small test will be made here 
// to be sure the functions work as they need to
// Using -g flags while compiling to debug with lldb.

int main(int ac, char **av) {
	int array[10] = {1,2,3,4,5};
	int arrayB[5] = {9,8,7,6,5};
	int arrayC[5] = {9,8,7,6,5};

	// size_t length = sizeof(array) / sizeof(array[0]) - 1;
	size_t length = 5;

	stackA.stack = array; 
	stackA.top = length - 1;
	stackA.size = length;

	t_stack stackB = {
		.stack = arrayB,
		.top = length - 1, 
		.size = length
	};
	t_stack data3 = {
		.stack = arrayC, 
		.top = length - 1, 
		.size = length
	};
	// shift(NULL);
	// Stack[PUSH](&stackA, &stackB);
	// Stack[PUSH](&stackA, &stackB);
	// Stack[PUSH](&stackA, &stackB);
	// Stack[PUSH](&stackA, &stackB);
	// Stack[PUSH](&stackA, &stackB);
	// Stack[ROTATE](&stackA, NULL);
	int i = 0;
	while (i < stackA.size)
	{
		printf("%d", stackA.stack[i]);
		i++;
	}
	// i = 0;
	// printf("\n");
	// while (i < data2.size)
	// {
	// 	printf("%d", data2.stack[i]);
	// 	i++;
	// }
	return (0);
}
