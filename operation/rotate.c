/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 14:43:57 by daykim            #+#    #+#             */
/*   Updated: 2022/07/14 14:43:57 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_stack *pushswap)
{
	t_node	*node;

	if (pushswap->a_size < 2)
		return ;
	node = pushswap->stack_a->next;
	pushswap->stack_a->next = pushswap->stack_a->next->next;
	pushswap->stack_a->next->next->pre = pushswap->stack_a;
	pushswap->bottom_a->pre->next = node;
	node->pre = pushswap->bottom_a->pre;
	node->next = pushswap->bottom_a;
	pushswap->bottom_a->pre = node;
	ft_putstr_fd("ra\n", 1);
}

void	rb(t_stack *pushswap)
{
	t_node	*node;

	if (pushswap->b_size < 2)
		return ;
	node = pushswap->stack_b->next;
	pushswap->stack_b->next = pushswap->stack_b->next->next;
	pushswap->stack_b->next->next->pre = pushswap->stack_b;
	pushswap->bottom_b->pre->next = node;
	node->pre = pushswap->bottom_b->pre;
	node->next = pushswap->bottom_b;
	pushswap->bottom_b->pre = node;
	ft_putstr_fd("rb\n", 1);
}

void	rr(t_stack *pushswap)
{
	t_node	*node;

	if ((pushswap->a_size < 2) || (pushswap->b_size < 2))
		return ;
	node = pushswap->stack_a->next;
	pushswap->stack_a->next = pushswap->stack_a->next->next;
	pushswap->stack_a->next->next->pre = pushswap->stack_a;
	pushswap->bottom_a->pre->next = node;
	node->pre = pushswap->bottom_a->pre;
	node->next = pushswap->bottom_a;
	pushswap->bottom_a->pre = node;
	node = pushswap->stack_b->next;
	pushswap->stack_b->next = pushswap->stack_b->next->next;
	pushswap->stack_b->next->next->pre = pushswap->stack_b;
	pushswap->bottom_b->pre->next = node;
	node->pre = pushswap->bottom_b->pre;
	node->next = pushswap->bottom_b;
	pushswap->bottom_b->pre = node;
	ft_putstr_fd("rr\n", 1);
}
