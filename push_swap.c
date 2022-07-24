/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 16:43:12 by daykim            #+#    #+#             */
/*   Updated: 2022/07/03 16:43:12 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	ft_error(void)
{
	ft_putstr_fd("Error\n", 1);
	exit(1);
}

int	main(int argc, char *argv[])
{
	t_stack	*pushswap;
	int		flag;

	if (argc >= 2)
	{
		pushswap = ft_new_stack();
		ft_parsing(argv, pushswap);
		ft_check_duplicate(pushswap);
		flag = ft_check_sort(pushswap);
		if (flag)
			ft_sort(pushswap);
	}
	return (0);
}
