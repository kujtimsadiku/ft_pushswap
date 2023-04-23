# ifndef STACK_H
	# define STACK_H
			# include <stdlib.h>

		typedef struct s_stack
		{
			int		*stack;
			int		top;
			size_t	size;
		} t_stack;
		
		void	Swap(t_stack *stack);
		void	Rotate(t_stack *stack);
		void	ReverseRotate(t_stack *stack);
		void	Push(t_stack *stack, t_stack *insert);
		void	Pop(t_stack *popOut);

		// Typedefined return type void function points to a void function that takes 2 parameters
		// because even when the functions takes 1 parameter except Push is easier
		// for us to call like this Stack[function_order](&stackA, NULL);
		// because if it take only one we have error
		typedef void (*Function_Global)(t_stack *, t_stack *);

		// Extern tells compiler that we are declaring a global variable
		// and can be used in different files ("This declaration exist somewhere else")
		extern Function_Global Stack[];
		extern t_stack stackA;
		extern t_stack stackB;
		
# endif