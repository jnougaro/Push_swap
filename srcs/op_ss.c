/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_ss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 15:51:04 by jnougaro          #+#    #+#             */
/*   Updated: 2021/09/22 11:10:21 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa_ss(t_struct *data)
{
	int	temp;

	if (data->nb_arg > 1)
	{
		temp = data->stack_a[0];
		data->stack_a[0] = data->stack_a[1];
		data->stack_a[1] = temp;
	}
}

void	sb_ss(t_struct *data)
{
	int	temp;

	if (data->nb_arg > 1)
	{
		temp = data->stack_b[0];
		data->stack_b[0] = data->stack_b[1];
		data->stack_b[1] = temp;
	}
}

void	ss(t_struct *data)
{
	sa_ss(data);
	sb_ss(data);
	ft_putstr("ss\n");
	ss_index(data);
}
