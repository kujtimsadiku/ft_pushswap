# ifndef STACK_H
	# define STACK_H
		# include "ft_pushswap.h"
		# include <stdarg.h>

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

		typedef void (*Function_Global)(t_stack *, t_stack *);
		
		extern Function_Global Stack[];
# endif