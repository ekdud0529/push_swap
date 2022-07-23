/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_pos.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 15:48:42 by daykim            #+#    #+#             */
/*   Updated: 2022/07/22 15:48:42 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_get_min(t_node *st)
{
	int	min_num;

	min_num = st->value;
	while (st->next)
	{
		if (min_num > st->value)
		{
			min_num = st->value;
		}
		st = st->next;
	}
	return (min_num);
}

int	ft_get_max(t_node *st)
{
	int	max_num;

	max_num = st->value;
	while (st->next)
	{
		if (max_num < st->value)
		{
			max_num = st->value;
		}
		st = st->next;
	}
	return (max_num);
}

int	ft_set_mid(t_stack *pushswap, int num)
{
	t_node	*node;
	int		index;

	node = pushswap->stack_a->next;
	index = 0;
	while (node->next)
	{
		if ((node->value < num) && (num < node->next->value))
		{
			index++;
			break ;
		}
		index++;
		node = node->next;
	}
	if (index >= pushswap->a_size / 2)
		index = (pushswap->a_size - index) * (-1);
	return (index);
}

int	ft_set_min(t_stack *pushswap)
{
	t_node	*node;
	int		index;
	int		min_num;
	int		num;

	index = 0;
	node = pushswap->stack_a->next;
	min_num = ft_get_min(node);
	while (node->next)
	{
		num = node->value;
		if (min_num == num)
			break ;
		index++;
		node = node->next;
	}
	if (index >= pushswap->a_size / 2)
		index = (pushswap->a_size - index) * (-1);
	return (index);
}

int	ft_set_max(t_stack *pushswap)
{
	t_node	*node;
	int		index;
	int		max_num;
	int		num;

	index = 0;
	node = pushswap->stack_a->next;
	max_num = ft_get_max(node);
	while (node->next)
	{
		num = node->value;
		if (max_num == num)
		{
			index++;
			break ;
		}
		index++;
		node = node->next;
	}
	if (index >= pushswap->a_size / 2)
		index = (pushswap->a_size - index) * (-1);
	return (index);
}
