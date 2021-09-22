/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 13:53:53 by jnougaro          #+#    #+#             */
/*   Updated: 2021/09/22 11:11:20 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_if_sorted(t_struct *data)
{
	int	i;

	i = 0;
	data->nb_int_sorted = 1;
	while (data->nb_int_sorted < data->nb_arg \
			&& (data->stack_a[i] < data->stack_a[i + 1]))
	{
		i++;
		data->nb_int_sorted++;
	}
	if (data->nb_int_sorted == data->nb_arg)
	{
		free_stack(data, 0);
		return (0);
	}
	else
		return (1);
}

void	two_arg(t_struct *data)
{
	if (data->stack_a[0] < data->stack_a[1])
		free_stack(data, 0);
	else
	{
		sa(data);
		free_stack(data, 0);
	}
}

void	three_arg(t_struct *data)
{
	if (data->stack_a[0] == data->arg_max)
		ra(data);
	if (data->stack_a[1] == data->arg_min)
		sa(data);
	if (data->stack_a[1] == data->arg_max)
		rra(data);
}

void	sort_arg(t_struct *data)
{
	while (check_if_sorted(data) == 1 || data->nb_b != 0)
	{
		if (data->nb_arg == 2)
			two_arg(data);
		if (data->nb_arg == 3 || (data->nb_arg == 5 && data->nb_a == 3) \
				|| (data->nb_arg == 4 && data->nb_a == 3))
			three_arg(data);
		if (data->nb_arg == 4)
			four_arg(data);
		if (data->nb_arg == 5)
			five_arg(data);
		if (data->nb_arg >= 6)
			other_arg(data);
	}
}
