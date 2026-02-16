/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabboud <cabboud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 08:58:16 by cabboud           #+#    #+#             */
/*   Updated: 2026/02/16 09:35:48 by cabboud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_min_to_b(t_list **stack_a, t_list **stack_b, char **ops)
{
	int	min_idx;
	int	size;

	min_value_in_list(*stack_a, &min_idx);
	size = ft_lstsize(*stack_a);
	if (min_idx <= size / 2)
	{
		while (min_idx--)
			ra(stack_a, ops);
	}
	else
	{
		min_idx = size - min_idx;
		while (min_idx--)
			rra(stack_a, ops);
	}
	pb(stack_a, stack_b, ops);
}

static void	sort_four(t_list **stack_a, t_list **stack_b, char **ops)
{
	push_min_to_b(stack_a, stack_b, ops);
	sort_three(stack_a, ops);
	pa(stack_a, stack_b, ops);
}

void	sort_five(t_list **stack_a, char **ops)
{
	t_list	*stack_b;

	stack_b = NULL;
	push_min_to_b(stack_a, &stack_b, ops);
	sort_four(stack_a, &stack_b, ops);
	pa(stack_a, &stack_b, ops);
}
