/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 14:31:26 by daykim            #+#    #+#             */
/*   Updated: 2022/07/18 14:31:26 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	ft_sort(t_stack *pushswap)
{
	if (pushswap->a_size == 2)
	{
		if ((pushswap->stack_a->next->value) > (pushswap->bottom_a->pre->value))
			sa(pushswap);
	}
	else if (pushswap->a_size == 3)
	{
		ft_three_sort(pushswap);
	}
	else
	{
		ft_devide_3groups(pushswap);
		ft_greedy_sort(pushswap);
	}
}

void	ft_greedy_sort(t_stack *pushswap)
{
	int		a_pos;
	int		b_pos;

	st_b = pushswap->stack_b;
	if (pushswap->a_size == 2)
	{
		if ((pushswap->stack_a->next->value) > (pushswap->bottom_a->pre->value))
			sa(pushswap);
	}
	else if (pushswap->a_size == 3)
	{
		ft_three_sort(pushswap);
	}
	while (pushswap->b_size)
	{
		a_pos = 0;
		b_pos = 0;
		ft_min_rotate(pushswap, &a_pos, &b_pos);
		ft_rr(pushswap, &a_pos, &b_pos);
		ft_rotate_stack(pushswap, a_pos, b_pos);
		pa(pushswap);
	}
}

void	ft_three_sort(t_stack *pushswap)
{
	int	n1;
	int	n2;
	int	n3;

	n1 = pushswap->stack_a->next->value;
	n2 = pushswap->stack_a->next->next->value;
	n3 = pushswap->bottom_a->pre->value;
	if ((n1 < n2) && (n2 > n3) && (n1 < n3))
		ft_sort_132(pushswap);
	else if ((n1 > n2) && (n2 < n3) && (n1 < n3))
		ft_sort_213();
	else if ((n1 < n2) && (n2 > n1) && (n1 > n3))
		ft_sort_231();
	else if ((n1 > n2) && (n2 < n3) && (n1 > n3))
		ft_sort_312();
	else if ((n1 > n2) && (n2 > n3) && (n1 > n3))
		ft_sort_321();
}