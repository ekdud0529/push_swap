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

void	ft_error(void)
{
	ft_putstr_fd("Error\n", 1);
	exit(1);
}

int	main(int argc, char *argv[])
{
	t_stack	*pushswap;
	
	if (argc > 2)
	{
		// parsing and push stack
		pushswap = ft_new_stack();
		ft_parsing(argv, &pushswap);

		// exception 중복 체크, 정렬여부 체크(-> 에러 출력 X)
		ft_check_duplicate(&pushswap, pushswap->a_size);
		ft_check_sort(&pushswap, pushswap->a_size);

		// check sort
		// sort -> greedy
	}
	return (0);
}
