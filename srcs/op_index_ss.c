/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_index_ss.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 11:09:58 by jnougaro          #+#    #+#             */
/*   Updated: 2021/09/22 11:10:01 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa_index(t_struct *data)
{
	int	temp;

	if (data->nb_arg > 1)
	{
		temp = data->index_a[0];
		data->index_a[0] = data->index_a[1];
		data->index_a[1] = temp;
	}
}

void	sb_index(t_struct *data)
{
	int	temp;

	if (data->nb_arg > 1)
	{
		temp = data->index_b[0];
		data->index_b[0] = data->index_b[1];
		data->index_b[1] = temp;
	}
}

void	ss_index(t_struct *data)
{
	sa_index(data);
	sb_index(data);
}

void	pa_index(t_struct *data)
{
	int	i;
	int	j;
	int	k;

	k = 0;
	i = data->nb_index_a;
	j = data->nb_index_b;
	if (data->nb_index_b > 0)
	{
		while (i > 0)
		{
			data->index_a[i] = data->index_a[i - 1];
			i--;
		}
		data->index_a[0] = data->index_b[0];
		data->nb_index_a += 1;
		data->nb_index_b -= 1;
		while (k < j - 1)
		{
			data->index_b[k] = data->index_b[k + 1];
			k++;
		}
	}
}

void	pb_index(t_struct *data)
{
	int	i;
	int	j;
	int	k;

	k = 0;
	i = data->nb_index_a;
	j = data->nb_index_b;
	if (data->nb_index_a > 0)
	{
		while (j > 0)
		{
			data->index_b[j] = data->index_b[j - 1];
			j--;
		}
		data->index_b[0] = data->index_a[0];
		data->nb_index_b += 1;
		data->nb_index_a -= 1;
		while (k < i - 1)
		{
			data->index_a[k] = data->index_a[k + 1];
			k++;
		}
	}
}
