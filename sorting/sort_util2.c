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

static void	ft_array_sort(int *num, int size)
{
	int		i;
	int		j;
	int		tmp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (num[i] > num[j])
			{
				tmp = num[i];
				num[i] = num[j];
				num[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

void	ft_get_pivot(t_stack *pushswap, int *pv1, int *pv2)
{
	int		*num;
	int		index;
	t_node	*node;

	num = (int *)malloc(sizeof(int) * (pushswap->a_size));
	if (!num)
		return ;
	node = pushswap->stack_a->next;
	index = 0;
	while (node->next)
	{
		num[index] = node->value;
		index++;
		node = node->next;
	}
	index = pushswap->a_size;
	ft_array_sort(num, index);
	*pv1 = num[index / 3];
	*pv2 = num[(index / 3) * 2];
	free(num);
}
