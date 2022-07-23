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

#include "../push_swap.h"

void	ft_move_node(t_stack *pushswap, int pv1, int pv2)
{
	if ((pushswap->stack_a->next->value) < pv1)
	{
		pb(pushswap);
		rb(pushswap);
	}
	else if ((pushswap->stack_a->next->value) < pv2)
	{
		pb(pushswap);
	}
	else
		ra(pushswap);
}

int	ft_find_location(t_stack *pushswap, int num)
{
	int	index;

	if (num < ft_get_min(pushswap->stack_a->next))
		index = ft_set_min(pushswap);
	else if (num > ft_get_max(pushswap->stack_a->next))
		index = ft_set_max(pushswap);
	else
		index = ft_set_mid(pushswap, num);
	return (index);
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
		pos_a = ft_find_location(pushswap, num);
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

void	ft_rr_stack(t_stack *pushswap, int *a, int *b)
{
	while ((*a != 0) && (*b != 0) && (*a > 0) && (*b > 0))
	{
		rr(pushswap);
		*a = *a - 1;
		*b = *b - 1;
	}
	while ((*a != 0) && (*b != 0) && (*a < 0) && (*b < 0))
	{
		rrr(pushswap);
		*a = *a + 1;
		*b = *b + 1;
	}
}

void	ft_rotate_stack(t_stack *pushswap, int a, int b)
{
	while (a != 0)
	{
		if (a-- > 0)
		{
			ra(pushswap);
		}
		else if (a++ < 0)
		{
			rra(pushswap);
		}
	}
	while (b != 0)
	{
		if (b-- > 0)
		{
			rb(pushswap);
		}
		else if (b++ < 0)
		{
			rrb(pushswap);
		}
	}
}