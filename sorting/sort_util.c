/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_util.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 16:13:05 by daykim            #+#    #+#             */
/*   Updated: 2022/07/19 16:13:05 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_devide_3groups(t_stack *pushswap)
{
	int	pivot1;
	int	pivot2;
	int index;

	pivot1 = pushswap->stack_a->next;
	pivot2 = pushswap->stack_a->next->next;
	if (pivot1 > pivot2)
	{
		index = pivot1;
		pivot1 = pivot2;
		pivot2 = index;
	}
	index = pushswap->a_size;
	while (index)
	{
		ft_move_node(pushswap, pivot1, pivot2);
		index--;
	}
	while (pushswap->a_size > 3)
	{
		pb(pushswap);
	}
}

void	ft_move_node(t_stack *pushswap, int pv1, int pv2)
{
	if ((pushswap->stack_a->next) < pv1)
	{
		pb(pushswap);
		rb(pushswap);
	}
	else if ((pushswap->stack_a->next) < pv2)
	{
		pb(pushswap);
	}
	else
		ra(pushswap);
}

void	ft_min_rotate(t_stack *pushswap, int *a, int *b)
{
	int		pos_a;
	int		pos_b;
	int		index;
	int		num;
	t_node	*st_b;

	index = 0;
	st_b = pushswap->stack_b->next;
	while (index < pushswap->b_size)
	{
		num = st_b->value;
		// b의 stack a에서의 위치
		if ((pushswap->b_size / 2) < index)
			pos_b = (pushswap->b_size - index) * (-1);
		else
			pos_b = index;
		if (index == 0 || ft_smaller_move(*a, *b, pos_a, pos_b))
		{
			*a = pos_a;
			*b = pos_b;
		}
		st_b = st_b->next;
		index++;
	}
}

void	ft_rr(t_stack *pushswap, int *a, int *b)
{

}

void	ft_rotate_stack(t_stack *pushswap, int a, int b)
{

}