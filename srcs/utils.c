/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 10:22:31 by jnougaro          #+#    #+#             */
/*   Updated: 2021/09/22 11:10:37 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_struct *data, int index)
{
	free(data->stack_a);
	data->stack_a = NULL;
	free(data->index_a);
	data->index_a = NULL;
	free(data->stack_b);
	data->stack_b = NULL;
	free(data->index_b);
	data->index_b = NULL;
	if (index == 0)
		exit(0);
	if (index == 1)
		exit(1);
}

void	err_exit(void)
{
	write(1, "Error\n", 6);
	exit(1);
}
