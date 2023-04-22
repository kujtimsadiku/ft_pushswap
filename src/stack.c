#include "../include/stack.h"

void	ReverseRotate(t_stack *stack)
{
	if (stack->size <= 1)
		return ;
	size_t i = stack->size - 1;
	while (i)
	{
		int tmp = stack->stack[i - 1];
		stack->stack[i - 1] = stack->stack[i];
		stack->stack[i] = tmp;
		i--;
	}
}


// Shifts everything by one. last element becomes the first element
void	Rotate(t_stack *stack)
{
	if (stack->size <= 1)
		return ;
	int	i = 0;
	while (i < stack->size)
	{
		int tmp = stack->stack[i + 1];
		stack->stack[i + 1] = stack->stack[i];
		stack->stack[i] = tmp;
		i++;
	}
}

void	Swap(t_stack *stack)
{
	// We check if the stack is not empty before swap
	if (stack->size <= 1)
		return ;
	int tmp = stack->stack[stack->top];
	stack->stack[stack->top] = stack->stack[stack->top - 1];
	stack->stack[stack->top - 1] = tmp;
}

// int		IsEmpty(int *stack)
// {
// 	int end = sizeof(stack) / sizeof(stack[0]) - 1;
	
// 	return (FALSE)
// 	return (TRUE);
// }

// void	Push(t_stack *stack, t_stack *insert)
// {

// 	if (insert->size != 0) 
// 	{
// 		stack->stack[size] = insert->stack[0];
// 		stack->size += 1;
// 	}
// 	else
// 		return ;
// 	/**
// 	 * takes void * and checks sizeof(ptr[0])
// 	 * with this we can check if it is int the return of byte will be 4
// 	 * char it will be 1
// 	 * we then can typecast it
// 	 */
// }