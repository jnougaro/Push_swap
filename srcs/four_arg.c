/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   four_arg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 11:09:21 by jnougaro          #+#    #+#             */
/*   Updated: 2021/09/22 11:09:23 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_min(t_struct *data, int index_min)
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
		rra(data);
		rra(data);
		pb(data);
	}
	if (index_min == 3)
	{
		rra(data);
		pb(data);
	}
}

void	index_min(t_struct *data)
{
	int	index_min;

	index_min = 0;
	while (index_min < data->nb_a)
	{
		if (data->stack_a[index_min] == data->arg_min)
			push_min(data, index_min);
		index_min++;
	}
}

void	four_arg(t_struct *data)
{
	int	i;

	i = 0;
	if (data->nb_a > 3)
	{
		index_min(data);
		while (i < data->nb_a)
		{
			find_min_max(data, i);
			i++;
		}
		return ;
	}
	if (data->nb_int_sorted == 3 && data->nb_a == 3)
		pa(data);
}
