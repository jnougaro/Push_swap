/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 11:10:31 by jnougaro          #+#    #+#             */
/*   Updated: 2021/09/22 11:25:04 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_in_a_2(t_struct *data, int parse, int index, int half)
{
	while (data->index_b[parse] != index)
		parse++;
	while (data->index_b[0] < index)
	{
		if (data->index_b[0] == index - 1)
		{
			pa(data);
			data->find_1 = 1;
		}
		else
		{
			if (parse < half)
				rb(data);
			else
				rrb(data);
		}
	}
}

void	sort_in_a(t_struct *data)
{
	int	parse;
	int	index;
	int	half;

	index = data->nb_arg - 1;
	while (index >= 0)
	{
		half = data->nb_b / 2;
		data->find_1 = 0;
		parse = 0;
		sort_in_a_2(data, parse, index, half);
		pa(data);
		if (data->find_1 == 1)
		{
			if (data->index_a[0] > data->index_a[1])
				sa(data);
			index -= 2;
		}
		else
			index--;
	}
}

void	separate_chunk(t_struct *data, int chunk, int parse)
{
	data->parse2 = data->nb_a - 1;
	data->parse3 = 0;
	while (data->index_a[data->parse2] >= chunk)
	{
		data->parse2--;
		data->parse3++;
	}
	while (data->index_a[0] >= chunk)
	{
		if (parse < data->parse3)
			ra(data);
		else
			rra(data);
	}
	if (data->index_a[0] < chunk)
		pb(data);
}

void	other_arg(t_struct *data)
{
	int	chunk;
	int	index;
	int	parse;

	index = 0;
	if (data->nb_arg < 250)
		chunk = (data->nb_arg / 5) + (data->nb_arg % 5);
	else
		chunk = (data->nb_arg / 10) + (data->nb_arg % 10);
	while (chunk <= data->nb_arg)
	{
		while (index < chunk)
		{
			parse = 0;
			while (data->index_a[parse] >= chunk)
				parse++;
			separate_chunk(data, chunk, parse);
			index++;
		}
		if (data->nb_arg < 250)
			chunk += (data->nb_arg / 5);
		else
			chunk += (data->nb_arg / 10);
	}
	sort_in_a(data);
}
