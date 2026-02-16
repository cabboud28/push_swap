/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_coverups_two.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabboud <cabboud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 08:27:53 by cabboud           #+#    #+#             */
/*   Updated: 2026/02/16 08:27:53 by cabboud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb(t_list **stack_b, char **ops)
{
	rev_rotate(stack_b);
	ft_strjoin_sep(ops, "rrb", "\n");
}
