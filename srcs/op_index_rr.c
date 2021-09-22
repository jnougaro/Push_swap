/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_index_rr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 11:20:36 by jnougaro          #+#    #+#             */
/*   Updated: 2021/09/22 11:09:34 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra_index(t_struct *data)
{
	int	i;
	int	temp;

	i = 0;
	temp = data->index_a[0];
	while (i < data->nb_index_a)
	{
		if (i == data->nb_index_a - 1)
			data->index_a[data->nb_index_a - 1] = temp;
		else
			data->index_a[i] = data->index_a[i + 1];
		i++;
	}
}

void	rb_index(t_struct *data)
{
	int	i;
	int	temp;

	i = 0;
	temp = data->index_b[0];
	while (i < data->nb_index_b)
	{
		if (i == data->nb_index_b - 1)
			data->index_b[data->nb_index_b - 1] = temp;
		else
			data->index_b[i] = data->index_b[i + 1];
		i++;
	}
}

void	rr_index(t_struct *data)
{
	ra_index(data);
	rb_index(data);
}
