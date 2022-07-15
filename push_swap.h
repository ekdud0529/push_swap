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

# include <limits.h>
# include "libft/libft.h"

typedef struct s_linkedlist
{
	struct s_linkedlist	*pre;
	struct s_linkedlist	*next;
	int					value;
}	t_node;

typedef struct s_stack
{
	t_node	*stack_a;
	t_node	*bottom_a;
	t_node	*stack_b;
	t_node	*bottom_b;
	int		a_size;
	int		b_size;
}	t_stack;

void	ft_parsing(char *argv[], t_stack *pushswap);
void	ft_error(void);

t_node	*ft_new_node(void);
t_stack	*ft_new_stack(void);
void	ft_insert_stack(t_stack *pushswap, int num);

void	ft_check_duplicate(t_stack *pushswap);
void	ft_check_sort(t_stack *pushswap);

void	sa(t_stack *pushswap);
void	sb(t_stack *pushswap);
void	ss(t_stack *pushswap);

void	pa(t_stack *pushswap);
void	pb(t_stack *pushswap);

void	ra(t_stack *pushswap);
void	rb(t_stack *pushswap);
void	rr(t_stack *pushswap);

void	rra(t_stack *pushswap);
void	rrb(t_stack *pushswap);
void	rrr(t_stack *pushswap);

#endif