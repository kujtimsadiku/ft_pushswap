#include "include/ft_pushswap.h"
#include <stdio.h>
#include "include/stack.h"

Function_Global Stack[] = {
    (Function_Global)Push,
    (Function_Global)Swap,
    (Function_Global)Rotate,
    (Function_Global)ReverseRotate
};
// small test will be made here 
// to be sure the functions work as they need to
// Using -g flags while compiling to debug with lldb.

int main() {
	int array[10] = {1,2,3,4,5};
	int arrayB[5] = {9,8,7,6,5};
	int arrayC[5] = {9,8,7,6,5};

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
		.size = length
	};
	t_stack data3 = {
		.stack = arrayC, 
		.top = length - 1, 
		.size = length
	};
	// shift(&data3);
	Stack[PUSH](&data, &data2);
	Stack[PUSH](&data, &data2);
	Stack[PUSH](&data, &data2);
	Stack[PUSH](&data, &data2);
	Stack[PUSH](&data, &data2);
	Stack[ROTATE](&data, NULL);
	int i = 0;
	while (i < data.size)
	{
		printf("%d", data.stack[i]);
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
