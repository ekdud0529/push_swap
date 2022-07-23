/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 16:15:23 by daykim            #+#    #+#             */
/*   Updated: 2022/07/22 16:15:23 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_smaller_move(int x, int y, int a, int b)
{
	if (x < 0)
		x *= -1;
	if (y < 0)
		y *= -1;
	if (a < 0)
		a *= -1;
	if (b < 0)
		b *= -1;
	if ((x + y) > (a + b))
		return (1);
	return (0);
}

void	ft_final_sort(t_stack *pushswap)
{
	int	index;

	index = ft_set_min(pushswap);
	while (index != 0)
	{
		if (index > 0)
		{
			ra(pushswap);
			index--;
		}
		else
		{
			rra(pushswap);
			index++;
		}
	}
}

void	ft_rotate_a(t_stack *pushswap, int a)
{
	while (a != 0)
	{
		if (a > 0)
		{
			ra(pushswap);
			a--;
		}
		else
		{
			rra(pushswap);
			a++;
		}
	}
}

void	ft_rotate_b(t_stack *pushswap, int b)
{
	while (b != 0)
	{
		if (b > 0)
		{
			rb(pushswap);
			b--;
		}
		else
		{
			rrb(pushswap);
			b++;
		}
	}
}