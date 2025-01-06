#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include "./libft/libft.h"
#include "./printf/ft_printf.h"

typedef struct s_node
{
	int	value;
	struct s_node	*next;
	struct s_node	*prevoius;
}	t_node;

typedef struct	s_stack
{
	t_node	*top;
	t_node	*bottom;
	int	size;
}	t_stack;

#endif
