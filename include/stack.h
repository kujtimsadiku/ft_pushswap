# ifndef STACK_H
	# define STACK_H

		typedef struct t_stack
		{
			int		*stack
			int		top;
			size_t	size;
		};
		
		void	Push(t_stack *stack, );
# endif