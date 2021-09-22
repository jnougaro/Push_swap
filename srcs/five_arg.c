/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_arg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 10:43:16 by jnougaro          #+#    #+#             */
/*   Updated: 2021/09/22 11:09:16 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	treat_max(t_struct *data, int index_max)
{
	if (index_max == 0)
		pb(data);
	if (index_max == 1)
	{
		sa(data);
		pb(data);
	}
	if (index_max == 2)
	{
		ra(data);
		sa(data);
		pb(data);
	}
	if (index_max == 3)
	{
		rra(data);
		pb(data);
	}
}

void	treat_min(t_struct *data, int index_min)
{
	if (index_min == 0)
		pb(data);
	if (index_min == 1)
	{
		sa(data);
		pb(data);
	}
	if (index_min == 2)
	{
		ra(data);
		ra(data);
		pb(data);
	}
	if (index_min == 3)
	{
		rra(data);
		rra(data);
		pb(data);
	}
	if (index_min == 4)
	{
		rra(data);
		pb(data);
	}
}

void	find_index_min(t_struct *data)
{
	int	index_min;

	index_min = 0;
	while (index_min < data->nb_a)
	{
		if (data->stack_a[index_min] == data->arg_min)
			treat_min(data, index_min);
		index_min++;
	}
}

void	find_index_max(t_struct *data)
{
	int	index_max;

	index_max = 0;
	while (index_max < data->nb_a)
	{
		if (data->stack_a[index_max] == data->arg_max)
			treat_max(data, index_max);
		index_max++;
	}
}

void	five_arg(t_struct *data)
{
	int	i;

	i = 0;
	if (data->nb_a > 3)
	{
		find_index_min(data);
		find_index_max(data);
		while (i < data->nb_a)
		{
			find_min_max(data, i);
			i++;
		}
		return ;
	}
	if (data->nb_int_sorted == 3 && data->nb_a == 3)
	{
		pa(data);
		ra(data);
		pa(data);
	}
}
