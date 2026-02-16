/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabboud <cabboud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 08:28:30 by cabboud           #+#    #+#             */
/*   Updated: 2026/02/16 08:56:56 by cabboud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa_rra(t_list **stack, char **ops)
{
	swap(stack);
	rev_rotate(stack);
	ft_strjoin_sep(ops, "sa\nrra", "\n");
}

void	sa_ra(t_list **stack, char **ops)
{
	swap(stack);
	rotate(stack);
	ft_strjoin_sep(ops, "sa\nra", "\n");
}

void	sa(t_list **stack, char **ops)
{
	swap(stack);
	ft_strjoin_sep(ops, "sa", "\n");
}

void	rra(t_list **stack, char **ops)
{
	rev_rotate(stack);
	ft_strjoin_sep(ops, "rra", "\n");
}

void	sort_three(t_list **stack, char **ops)
{
	int	a;
	int	b;
	int	c;

	a = *(int *)(*stack)->content;
	b = *(int *)(*stack)->next->content;
	c = *(int *)(*stack)->next->next->content;
	if (a > b && a > c)
	{
		if (b < c)
			ra(stack, ops);
		else
			sa_rra(stack, ops);
	}
	else if (a < b && a < c)
	{
		if (b > c)
			sa_ra(stack, ops);
	}
	else if (a > b)
		sa(stack, ops);
	else
		rra(stack, ops);
}
