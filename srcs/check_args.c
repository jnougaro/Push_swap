/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnougaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 12:17:14 by jnougaro          #+#    #+#             */
/*   Updated: 2021/09/22 15:45:51 by jnougaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_int_min(char **argv)
{
	int		i;

	i = 1;
	while (argv[i])
	{
		if (ft_strlen(argv[i]) > ft_strlen("-2147483648"))
		{
			write(1, "Error\n", 6);
			exit(1);
		}
		else if ((ft_strlen(argv[i]) == ft_strlen("-2147483648")))
		{
			if (argv[i][0] != '-')
			{
				write(1, "Error\n", 6);
				exit(1);
			}
			else if (ft_strncmp(argv[i], "-2147483648", ft_strlen(argv[i])) < 0)
			{
				write(1, "Error\n", 6);
				exit(1);
			}
		}
		i++;
	}
}

void	check_int_max(char **argv)
{
	int		i;

	i = 1;
	while (argv[i])
	{
		if (argv[i][0] == '-')
			i++;
		else
		{
			if (ft_strlen(argv[i]) > ft_strlen("2147483647"))
			{
				write(1, "Error\n", 6);
				exit(1);
			}
			else if (ft_strlen(argv[i]) == ft_strlen("2147483647"))
			{
				if (ft_strncmp(argv[i], "2147483647", ft_strlen(argv[i])) > 0)
				{
					write(1, "Error\n", 6);
					exit(1);
				}
			}
			i++;
		}
	}
}

void	check_duplicate(char **argv)
{
	int	i;
	int	j;
	int	len;

	i = 1;
	while (argv[i])
	{
		j = i + 1;
		while (argv[j])
		{
			if (ft_strlen(argv[j]) > ft_strlen(argv[i]))
				len = ft_strlen(argv[j]);
			else
				len = ft_strlen(argv[i]);
			if (ft_strncmp(argv[i], argv[j], len) == 0)
			{
				write(1, "Error\n", 6);
				exit(1);
			}
			j++;
		}
		i++;
	}
}

void	check_arguments(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (ft_isdigit(argv[i][j]) == 0)
			{
				if (argv[i][j] == '-' && !argv[i][j + 1])
					err_exit();
				if (j != 0 || (j == 0 && argv[i][j] != '-'))
					err_exit();
			}
			j++;
		}
		i++;
	}
	check_duplicate(argv);
	check_int_min(argv);
	check_int_max(argv);
}
