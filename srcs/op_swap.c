/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 16:17:16 by jnougaro          #+#    #+#             */
/*   Updated: 2021/09/22 11:10:25 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_struct *data)
{
	int	temp;

	if (data->nb_arg > 1)
	{
		temp = data->stack_a[0];
		data->stack_a[0] = data->stack_a[1];
		data->stack_a[1] = temp;
	}
	ft_putstr("sa\n");
	sa_index(data);
}

void	sb(t_struct *data)
{
	int	temp;

	if (data->nb_arg > 1)
	{
		temp = data->stack_b[0];
		data->stack_b[0] = data->stack_b[1];
		data->stack_b[1] = temp;
	}
	ft_putstr("sb\n");
	sb_index(data);
}

void	pa(t_struct *data)
{
	int	i;
	int	j;
	int	k;

	k = 0;
	i = data->nb_a;
	j = data->nb_b;
	if (data->nb_b > 0)
	{
		while (i > 0)
		{
			data->stack_a[i] = data->stack_a[i - 1];
			i--;
		}
		data->stack_a[0] = data->stack_b[0];
		data->nb_a += 1;
		data->nb_b -= 1;
		while (k < j - 1)
		{
			data->stack_b[k] = data->stack_b[k + 1];
			k++;
		}
	}
	ft_putstr("pa\n");
	pa_index(data);
}

void	pb(t_struct *data)
{
	int	i;
	int	j;
	int	k;

	k = 0;
	i = data->nb_a;
	j = data->nb_b;
	if (data->nb_a > 0)
	{
		while (j > 0)
		{
			data->stack_b[j] = data->stack_b[j - 1];
			j--;
		}
		data->stack_b[0] = data->stack_a[0];
		data->nb_b += 1;
		data->nb_a -= 1;
		while (k < i - 1)
		{
			data->stack_a[k] = data->stack_a[k + 1];
			k++;
		}
	}
	ft_putstr("pb\n");
	pb_index(data);
}
