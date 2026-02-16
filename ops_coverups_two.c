

#include "push_swap.h"

void	rrb(t_list **stack_b, char **ops)
{
	rev_rotate(stack_b);
	ft_strjoin_sep(ops, "rrb", "\n");
}
