/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroue <acroue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:30:53 by gmoulin           #+#    #+#             */
/*   Updated: 2024/06/13 18:29:42 by acroue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/* LIBRARIES */
# include "libft.h"

/* FUNCTIONS */
typedef struct	s_stack
{
	struct	s_stack	*next;
	struct	s_stack	*prev;
	int		value;
	int		index;
}				t_stack;

void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
void	push(t_stack **src, t_stack **dest);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);
int		check_dup(t_stack *a);
int		check_sorted(t_stack *a);
size_t	stacksize(t_stack *stack);
void	ft_memdel(void *ptr);
void	**ft_fsplit(char **split);
void	sort_2(t_stack **a);
void	sort_3(t_stack **a);
void	start_sort(t_stack **a);
void	free_list(t_stack *x);
void	print(t_stack *x);
void	error_arg(void);
void	pushonb(t_stack **a, t_stack **b);
void	indexing(t_stack **a);
#endif
