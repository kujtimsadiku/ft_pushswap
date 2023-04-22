#include <stdio.h>
#include "include/stack.h"
#include "include/ft_pushswap.h"


// small test will be made here 
// to be sure the functions work ass they need to
// Using -g flags while compiling to debug with lldb.

int main() {
	int array[5] = {1,2,3,4,5};
	size_t length = sizeof(array) / sizeof(array[0]) - 1;
	t_stack data = {.stack = array, .top = length, length + 1};
	ReverseRotate(&data);
	int i = 0;
	while (i < data.size)
	{
		printf("%d", data.stack[i]);
		i++;
	}
	return (0);
}
