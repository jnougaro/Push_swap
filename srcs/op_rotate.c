/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 14:55:38 by jnougaro          #+#    #+#             */
/*   Updated: 2021/09/22 11:10:05 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_struct *data)
{
	int	i;
	int	temp;

	i = 0;
	temp = data->stack_a[0];
	while (i < data->nb_a)
	{
		if (i == data->nb_a - 1)
			data->stack_a[data->nb_a - 1] = temp;
		else
			data->stack_a[i] = data->stack_a[i + 1];
		i++;
	}
	ft_putstr("ra\n");
	ra_index(data);
}

void	rb(t_struct *data)
{
	int	i;
	int	temp;

	i = 0;
	temp = data->stack_b[0];
	while (i < data->nb_b)
	{
		if (i == data->nb_b - 1)
			data->stack_b[data->nb_b - 1] = temp;
		else
			data->stack_b[i] = data->stack_b[i + 1];
		i++;
	}
	ft_putstr("rb\n");
	rb_index(data);
}

void	rra(t_struct *data)
{
	int	i;
	int	temp;

	i = data->nb_a - 1;
	temp = data->stack_a[data->nb_a - 1];
	while (i >= 0)
	{
		if (i == 0)
		{
			data->stack_a[0] = temp;
		}
		else
			data->stack_a[i] = data->stack_a[i - 1];
		i--;
	}
	ft_putstr("rra\n");
	rra_index(data);
}

void	rrb(t_struct *data)
{
	int	i;
	int	temp;

	i = data->nb_b - 1;
	temp = data->stack_b[data->nb_b - 1];
	while (i >= 0)
	{
		if (i == 0)
		{
			data->stack_b[0] = temp;
		}
		else
			data->stack_b[i] = data->stack_b[i - 1];
		i--;
	}
	ft_putstr("rrb\n");
	rrb_index(data);
}
