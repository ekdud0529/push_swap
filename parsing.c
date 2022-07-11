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

#include "push_swap.h"

static void	ft_free_list(char **tmp)
{
	int	i;

	i = 0;
	while(tmp[i])
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
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (('0' <= *str) && (*str <= '9'))
	{
		num = num * 10 + (*str - '0');
		if((flag == 1) && (num > INT_MAX))
			ft_error();
		if((flag == -1) && (num > -INT_MIN))
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

	index1 = 0;
	while (argv[index1])
	{
		if(!ft_strchr(argv[i], ' '))
			// 숫자인가? 맞다면 연결리스트에 추가
		else
		{
			index2 = 0;
			tmp = ft_split(argv[i], ' ');
			while (tmp[j])
			{
				// 유효한 값이면 연결리스트에 추가
				j++;
			}
			ft_free_list(tmp);
		}
		i++;
	}
}
