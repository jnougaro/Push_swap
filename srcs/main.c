/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 10:55:39 by jnougaro          #+#    #+#             */
/*   Updated: 2021/09/22 10:45:55 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	find_min_max(t_struct *data, int j)
{
	if (j == 0)
	{
		data->arg_min = data->stack_a[j];
		data->arg_max = data->stack_a[j];
	}
	else
	{
		if (data->stack_a[j] < data->arg_min)
			data->arg_min = data->stack_a[j];
		else if (data->stack_a[j] > data->arg_max)
			data->arg_max = data->stack_a[j];
	}
}

int	init_stack(t_struct *data, int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	data->stack_a = malloc(sizeof(int) * (argc - 1));
	if (!data->stack_a)
		return (-1);
	data->index_a = malloc(sizeof(int) * (argc - 1));
	if (!data->index_a)
		return (-1);
	while (argv[i])
	{
		data->stack_a[j] = ft_atoi(argv[i]);
		find_min_max(data, j);
		i++;
		j++;
	}
	data->stack_b = malloc(sizeof(int) * (argc - 1));
	if (!data->stack_b)
		return (-1);
	data->index_b = malloc(sizeof(int) * (argc - 1));
	if (!data->index_b)
		return (-1);
	return (0);
}

void	assign_index(t_struct *data)
{
	int	i;
	int	index;
	int	comp;

	i = 0;
	while (i < data->nb_a)
	{
		index = 0;
		comp = 0;
		while (comp < data->nb_a)
		{
			if (data->stack_a[i] > data->stack_a[comp])
				index++;
			comp++;
		}
		data->index_a[i] = index;
		i++;
	}	
}

int	main(int argc, char **argv)
{
	int			i;
	t_struct	data;

	i = 0;
	init_struct(&data, argc);
	while (argv[i])
	{
		if (!argv[i][0])
			err_exit();
		i++;
	}
	if (argc == 1)
		exit(1);
	else
		check_arguments(argv);
	if (argc == 2)
		exit(1);
	init_stack(&data, argc, argv);
	assign_index(&data);
	sort_arg(&data);
	return (0);
}
