/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 14:44:00 by daykim            #+#    #+#             */
/*   Updated: 2022/07/14 14:44:00 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_stack *pushswap)
{
	t_node	*node;

	if (pushswap->b_size < 1)
		return ;
	node = pushswap->stack_b;
	pushswap->stack_b = pushswap->stack_b->next;
	if (pushswap->a_size == 0)
	{
		node->next = pushswap->bottom_a;
		node->pre = pushswap->stack_a;
		pushswap->stack_a->next = node;
		pushswap->bottom_a->pre = node;
	}
	else
	{
		pushswap->bottom_a->pre->next = node;
		node->pre = pushswap->bottom_a->pre;
		pushswap->bottom_a->pre = node;
		node->next = pushswap->bottom_a;
	}
	pushswap->a_size += 1;
	pushswap->b_size -= 1;
	ft_putstr_fd("pa\n", 1);
}

void	pb(t_stack *pushswap)
{
	t_node	*node;

	if (pushswap->a_size < 1)
		return ;
	node = pushswap->stack_a;
	pushswap->stack_a = pushswap->stack_a->next;
	if (pushswap->b_size == 0)
	{
		node->next = pushswap->bottom_b;
		node->pre = pushswap->stack_b;
		pushswap->stack_b->next = node;
		pushswap->bottom_b->pre = node;
	}
	else
	{
		pushswap->bottom_b->pre->next = node;
		node->pre = pushswap->bottom_b->pre;
		pushswap->bottom_b->pre = node;
		node->next = pushswap->bottom_b;
	}
	pushswap->a_size -= 1;
	pushswap->b_size += 1;
	ft_putstr_fd("pb\n", 1);
}
