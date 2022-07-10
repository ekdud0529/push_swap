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

void	ft_error()
{
	ft_putstr_fd("Error\n", 1);
	exit(1);
}

int	main(int argc, char *argv[])
{
	int	*input;
	parsing_arg(argc, argv);
	return (0);
}
