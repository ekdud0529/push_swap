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
	node = pushswap->stack_b->next;
	pushswap->stack_b->next = pushswap->stack_b->next->next;
	pushswap->stack_b->next->pre = pushswap->stack_b;
	if (pushswap->a_size == 0)
	{
		node->next = pushswap->bottom_a;
		node->pre = pushswap->stack_a;
		pushswap->stack_a->next = node;
		pushswap->bottom_a->pre = node;
	}
	else
	{
		node->pre = pushswap->stack_a;
		node->next = pushswap->stack_a->next;
		pushswap->stack_a->next->pre = node;
		pushswap->stack_a->next = node;
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
	node = pushswap->stack_a->next;
	pushswap->stack_a->next = pushswap->stack_a->next->next;
	pushswap->stack_a->next->pre = pushswap->stack_a;
	if (pushswap->b_size == 0)
	{
		node->next = pushswap->bottom_b;
		node->pre = pushswap->stack_b;
		pushswap->stack_b->next = node;
		pushswap->bottom_b->pre = node;
	}
	else
	{
		node->pre = pushswap->stack_b;
		node->next = pushswap->stack_b->next;
		pushswap->stack_b->next->pre = node;
		pushswap->stack_b->next = node;
	}
	pushswap->a_size -= 1;
	pushswap->b_size += 1;
	ft_putstr_fd("pb\n", 1);
}
