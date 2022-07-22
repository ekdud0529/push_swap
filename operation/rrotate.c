/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 14:43:51 by daykim            #+#    #+#             */
/*   Updated: 2022/07/14 14:43:51 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_stack *pushswap)
{
	t_node	*node;

	if (pushswap->a_size < 2)
		return ;
	node = pushswap->bottom_a->pre;
	pushswap->bottom_a->pre = node->pre;
	node->pre->next = pushswap->bottom_a;
	node->pre = pushswap->stack_a;
	node->next = pushswap->stack_a->next;
	pushswap->stack_a->next = node;
	ft_putstr_fd("rra\n", 1);
}

void	rrb(t_stack *pushswap)
{
	t_node	*node;

	if (pushswap->b_size < 2)
		return ;
	node = pushswap->bottom_b->pre;
	pushswap->bottom_b->pre = node->pre;
	node->pre->next = pushswap->bottom_b;
	node->pre = pushswap->stack_b;
	node->next = pushswap->stack_b->next;
	pushswap->stack_b->next = node;
	ft_putstr_fd("rrb\n", 1);
}

void	rrr(t_stack *pushswap)
{
	t_node	*node;

	if ((pushswap->a_size < 2) || (pushswap->b_size < 2))
		return ;
	node = pushswap->bottom_a->pre;
	pushswap->bottom_a->pre = node->pre;
	node->pre->next = pushswap->bottom_a;
	node->pre = pushswap->stack_a;
	node->next = pushswap->stack_a->next;
	pushswap->stack_a->next = node;
	node = pushswap->bottom_b->pre;
	pushswap->bottom_b->pre = node->pre;
	node->pre->next = pushswap->bottom_b;
	node->pre = pushswap->stack_b;
	node->next = pushswap->stack_b->next;
	pushswap->stack_b->next = node;
	ft_putstr_fd("rrr\n", 1);
}
