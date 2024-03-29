/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_argv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 15:57:56 by daykim            #+#    #+#             */
/*   Updated: 2022/07/10 15:57:56 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_free_list(char **tmp)
{
	int	i;

	i = 0;
	while (tmp[i])
	{
		free(tmp[i]);
		i++;
	}
	free(tmp);
}

static int	ft_atoll(const char *str)
{
	int			sign;
	long long	num;

	sign = 1;
	num = 0;
	if (!(*str))
		ft_error();
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	if (*str == '\0')
		ft_error();
	while (ft_isdigit(*str))
	{
		num = num * 10 + (*str - '0');
		if ((sign == 1) && (num > INT_MAX))
			ft_error();
		if ((sign == -1) && (num > -(long long)(INT_MIN)))
			ft_error();
		str++;
	}
	if (*str != '\0')
		ft_error();
	return ((int)(num * sign));
}

void	ft_parsing(char *argv[], t_stack *pushswap)
{
	int		index1;
	int		index2;
	char	**tmp;

	index1 = 1;
	while (argv[index1])
	{
		if (!ft_strchr(argv[index1], ' '))
			ft_insert_stack(pushswap, ft_atoll(argv[index1]));
		else
		{
			index2 = 0;
			tmp = ft_split(argv[index1], ' ');
			while (tmp[index2])
			{
				ft_insert_stack(pushswap, ft_atoll(tmp[index2]));
				index2++;
			}
			ft_free_list(tmp);
		}
		index1++;
	}
}
