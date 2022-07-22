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

void	ft_sort(t_stack *pushswap);
void	ft_greedy_sort(t_stack *pushswap);
void	ft_three_sort(t_stack *pushswap);
void	ft_final_sort(t_stack *pushswap);

void	ft_devide_3groups(t_stack *pushswap);
void	ft_move_node(t_stack *pushswap, int pv1, int pv2);
void	ft_min_rotate(t_stack *pushswap, int *a, int *b);
void	ft_rr_stack(t_stack *pushswap, int *a, int *b);
void	ft_rotate_stack(t_stack *pushswap, int a, int b);
int		ft_smaller_move(int x, int y, int a, int b);

void	ft_sort_132(t_stack *pushswap);
void	ft_sort_213(t_stack *pushswap);
void	ft_sort_231(t_stack *pushswap);
void	ft_sort_312(t_stack *pushswap);
void	ft_sort_321(t_stack *pushswap);

int		ft_get_min(t_node *st);
int		ft_get_max(t_node *st);
int		ft_set_mid(t_stack *pushswap, int num);
int		ft_set_min(t_stack *pushswap);
int		ft_set_max(t_stack *pushswap);

#endif