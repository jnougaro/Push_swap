/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_index_rrr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 11:23:15 by jnougaro          #+#    #+#             */
/*   Updated: 2021/09/22 11:09:38 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra_index(t_struct *data)
{
	int	i;
	int	temp;

	i = data->nb_index_a - 1;
	temp = data->index_a[data->nb_index_a - 1];
	while (i >= 0)
	{
		if (i == 0)
		{
			data->index_a[0] = temp;
		}
		else
			data->index_a[i] = data->index_a[i - 1];
		i--;
	}
}

void	rrb_index(t_struct *data)
{
	int	i;
	int	temp;

	i = data->nb_index_b - 1;
	temp = data->index_b[data->nb_index_b - 1];
	while (i >= 0)
	{
		if (i == 0)
		{
			data->index_b[0] = temp;
		}
		else
			data->index_b[i] = data->index_b[i - 1];
		i--;
	}
}

void	rrr_index(t_struct *data)
{
	rra_index(data);
	rrb_index(data);
}
