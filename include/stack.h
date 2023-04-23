# ifndef STACK_H
	# define STACK_H
			# include <stdlib.h>
			# include <stdbool.h>

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

		typedef void (*GLOBAL_STACK)(t_stack *, t_stack *);

		// Extern tells compiler that we are declaring a global variable
		// and can be used in different files ("This declaration exist somewhere else")
		extern GLOBAL_STACK Stack[];
		extern t_stack stackA;
		extern t_stack stackB;
		
# endif