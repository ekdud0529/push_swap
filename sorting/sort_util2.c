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
	int	min_num;
	int	index;

	min_num = ft_get_min(pushswap->stack_a->next);
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
