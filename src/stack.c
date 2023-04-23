#include "../include/stack.h"

t_stack stackA = {NULL, -1, 0};
t_stack stackB = {NULL, -1, 0};

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
	while (i < stack->size - 1)
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

static void	InitTopAndSize(t_stack *inserted, t_stack *removed, ...)
{
	if (inserted != NULL)
	{
		inserted->size += 1; 
		inserted->top += 1;
	}
	if (removed != NULL)
	{
		removed->size -= 1;
		removed->top -= 1;
	}
}

void	Pop(t_stack *popOut)
{
	// will pop the top element (last) and will free it
	free(&popOut->stack[popOut->top]);
	InitTopAndSize(NULL, popOut);
}

void	Push(t_stack *insert, t_stack *remove)
{
	if (remove->size != 0) 
	{
		insert->stack[insert->top + 1] = remove->stack[remove->top];
		InitTopAndSize(insert, remove);
	}
	else
		return ;
}