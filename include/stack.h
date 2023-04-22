# ifndef STACK_H
	# define STACK_H
		# include "ft_pushswap.h"

		typedef struct n_stack
		{
			int		*stack;
			int		top;
			size_t	size;
		} t_stack;
		
		void	Swap(t_stack *stack);
		void	Rotate(t_stack *stack);
		void	ReverseRotate(t_stack *stack);
		void	Push(t_stack *stack, t_stack *insert);
		
# endif