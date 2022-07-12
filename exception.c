/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exception.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 22:00:26 by daykim            #+#    #+#             */
/*   Updated: 2022/07/11 22:00:26 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_duplicate(t_stack *pushswap, int size)
{
	t_node	*node;
	t_node	*search;
	int		num;

	node = ft_new_node();
	node = pushswap->stack_a->next;
	search = ft_new_node();
	while (node->next)
	{
		num = node->value;
		search = node->next;
		while (search->next)
		{
			if (search->value == num)
				ft_error();
			search = search->next;
		}
		node = node->next;
	}
}

void	ft_check_sort(t_stack *pushswap, int size)
{
	t_node	*node;
	int		flag;

	flag = 0;
	node = ft_new_node();
	node = pushswap->stack_a->next;
	while (node->next)
	{
		if(node->value > node->next->value)
		{
			flag = 1;
			break;
		}
		node = node->next;
	}
	if (flag)
	{
		exit(0);
	}
}