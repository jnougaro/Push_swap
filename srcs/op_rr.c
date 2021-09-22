/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 15:54:46 by jnougaro          #+#    #+#             */
/*   Updated: 2021/09/22 11:10:11 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra_rr(t_struct *data)
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
}

void	rb_rr(t_struct *data)
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
}

void	rr(t_struct *data)
{
	ra_rr(data);
	rb_rr(data);
	ft_putstr("rr\n");
	rr_index(data);
}
