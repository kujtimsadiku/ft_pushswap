# ifndef FT_PUSHSWAP_H
	# define FT_PUSHSWAP_H
		# include "../libft/includes/libft.h"
		# include <sys/types.h>
    	# include <sys/uio.h>
		# include <stdio.h>
		# include "stack.h"

		// Action 
		# define sa	"sa"
		# define sb	"sb"
		# define ss	"ss"
		# define ra	"ra"
		# define rb "rb"
		# define rr "rr"
		# define rra "rra"
		# define rrb "rrb"
		# define rrr "rrr"
		# define pa	"pa"
		# define pb "pb"

		# define TRUE 1
		# define FALSE 0

		// Function order defined to be get easy access and more secure
		// Trying to implement c++ stack way.
		# define PUSH 0
		# define SWAP 1
		# define ROTATE 2
		# define REVERSEROTATE 3
		# define POP 4

		void	shift(t_stack *stack);

#endif