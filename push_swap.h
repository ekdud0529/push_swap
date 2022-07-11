/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daykim <daykim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 16:43:22 by daykim            #+#    #+#             */
/*   Updated: 2022/07/03 16:43:22 by daykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include "libft/libft.h"
typedef struct	s_linkedlist
{
	t_node	*pre;
	t_node	*next;
	int		value;
}	t_node;

typedef struct s_stack
{
	t_node	*command;
	t_node	*stack_a;
	t_node	*stack_b;
	int		a_size;
	int		b_size;
}	t_stack;

void	ft_parsing(char *argv[], t_node head);

#endif