/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 14:30:51 by jnougaro          #+#    #+#             */
/*   Updated: 2021/09/22 11:10:53 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <limits.h>

typedef struct s_struct
{
	int	*stack_a;
	int	*stack_b;
	int	*index_a;
	int	*index_b;
	int	nb_arg;
	int	nb_a;
	int	nb_b;
	int	nb_index_a;
	int	nb_index_b;
	int	arg_min;
	int	arg_max;
	int	nb_int_sorted;
	int	parse2;
	int	parse3;
	int	find_1;
}	t_struct;

void	err_exit(void);
void	free_stack(t_struct *data, int index);
void	init_struct(t_struct *data, int argc);
void	find_min_max(t_struct *data, int j);
int		init_stack(t_struct *data, int argc, char **argv);
void	check_arguments(char **argv);
void	check_duplicate(char **argv);
void	check_int_max(char **argv);
void	check_int_min(char **argv);
void	assign_index(t_struct *data);
void	sort_arg(t_struct *data);
int		check_if_sorted(t_struct *data);
void	two_arg(t_struct *data);
void	three_arg(t_struct *data);
void	push_min(t_struct *data, int index_min);
void	index_min(t_struct *data);
void	four_arg(t_struct *data);
void	find_index_min(t_struct *data);
void	find_index_max(t_struct *data);
void	treat_min(t_struct *data, int index_min);
void	treat_max(t_struct *data, int index_min);
void	five_arg(t_struct *data);
void	other_arg(t_struct *data);
void	sort_in_a_2(t_struct *data, int parse, int index, int half);
void	sort_in_a(t_struct *data);
void	separate_chunk(t_struct *data, int chunk, int parse);
void	sa(t_struct *data);
void	sa_ss(t_struct *data);
void	sb(t_struct *data);
void	sb_ss(t_struct *data);
void	ss(t_struct *data);
void	pa(t_struct *data);
void	pb(t_struct *data);
void	ra(t_struct *data);
void	ra_rr(t_struct *data);
void	rb(t_struct *data);
void	rb_rr(t_struct *data);
void	rr(t_struct *data);
void	rra(t_struct *data);
void	rra_rrr(t_struct *data);
void	rrb(t_struct *data);
void	rrb_rrr(t_struct *data);
void	rrr(t_struct *data);
void	sa_index(t_struct *data);
void	sb_index(t_struct *data);
void	ss_index(t_struct *data);
void	pa_index(t_struct *data);
void	pb_index(t_struct *data);
void	ra_index(t_struct *data);
void	rb_index(t_struct *data);
void	rr_index(t_struct *data);
void	rra_index(t_struct *data);
void	rrb_index(t_struct *data);
void	rrr_index(t_struct *data);

#endif
