/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 15:53:13 by daykim            #+#    #+#             */
/*   Updated: 2022/07/12 15:53:13 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*ft_new_node(void)
{
	t_node	*new;

	new = 0;
	new = (t_node *)malloc(sizeof(t_node));
	new->pre = 0;
	new->next = 0;
	new->value = 0;
	return (new);
}

t_stack	*ft_new_stack(void)
{
	t_stack	*new;

	new = 0;
	new = (t_stack *)malloc(sizeof(t_stack));
	new->stack_a = ft_new_node();
	new->bottom_a = ft_new_node();
	new->stack_a->next = new->bottom_a;
	new->bottom_a->pre = new->stack_a;
	new->a_size = 0;
	new->b_size = 0;
	return (new);
}

void	ft_insert_stack(t_stack *pushswap, int num)
{
	t_node	*new;
	int		i;

	i = 0;
	new = ft_new_node();
	new->value = num;
	pushswap->bottom_a->pre->next = new;
	new->next = pushswap->bottom_a;
	new->pre = pushswap->bottom_a->pre;
	pushswap->bottom_a->pre = new;
	pushswap->a_size += 1;
}
