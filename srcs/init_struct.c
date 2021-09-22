/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 17:17:27 by jnougaro          #+#    #+#             */
/*   Updated: 2021/09/22 11:09:26 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_struct(t_struct *data, int argc)
{
	data->nb_arg = argc - 1;
	data->nb_a = argc - 1;
	data->nb_b = 0;
	data->nb_index_a = argc - 1;
	data->nb_index_b = 0;
	data->arg_min = 0;
	data->arg_max = 0;
	data->parse2 = 0;
	data->parse3 = 0;
	data->find_1 = 0;
}
