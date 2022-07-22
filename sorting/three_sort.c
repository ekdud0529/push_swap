/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 14:50:21 by daykim            #+#    #+#             */
/*   Updated: 2022/07/18 14:50:21 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_132(t_stack *pushswap)
{
	sa(pushswap);
	ra(pushswap);
}

void	ft_sort_213(t_stack *pushswap)
{
	sa(pushswap);
}

void	ft_sort_231(t_stack *pushswap)
{
	rra(pushswap);
}

void	ft_sort_312(t_stack *pushswap)
{
	ra(pushswap);
}

void	ft_sort_321(t_stack *pushswap)
{
	sa(pushswap);
	rra(pushswap);
}
