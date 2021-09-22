/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 15:56:33 by jnougaro          #+#    #+#             */
/*   Updated: 2021/09/22 11:10:14 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra_rrr(t_struct *data)
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
}

void	rrb_rrr(t_struct *data)
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
}

void	rrr(t_struct *data)
{
	rra_rrr(data);
	rrb_rrr(data);
	ft_putstr("rrr\n");
	rrr_index(data);
}
