/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 14:43:54 by daykim            #+#    #+#             */
/*   Updated: 2022/07/14 14:43:54 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_stack *pushswap)
{
	int	num;

	if (pushswap->a_size < 2)
		return ;
	num = pushswap->stack_a->next->value;
	pushswap->stack_a->next->value = pushswap->stack_a->value;
	pushswap->stack_a->value = num;
	ft_putstr_fd("sa\n", 1);
}

void	sb(t_stack *pushswap)
{
	int	num;

	if (pushswap->b_size < 2)
		return ;
	num = pushswap->stack_b->next->value;
	pushswap->stack_b->next->value = pushswap->stack_b->value;
	pushswap->stack_b->value = num;
	ft_putstr_fd("sb\n", 1);
}

void	ss(t_stack *pushswap)
{
	int	num;

	if ((pushswap->a_size < 2) || (pushswap->b_size < 2))
		return ;
	num = pushswap->stack_a->next->value;
	pushswap->stack_a->next->value = pushswap->stack_a->value;
	pushswap->stack_a->value = num;
	num = pushswap->stack_b->next->value;
	pushswap->stack_b->next->value = pushswap->stack_b->value;
	pushswap->stack_b->value = num;
	ft_putstr_fd("ss\n", 1);
}
