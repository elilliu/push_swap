/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif_args_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elilliu <elilliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 22:29:41 by elilliu           #+#    #+#             */
/*   Updated: 2023/12/27 22:39:33 by elilliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static int	char_in_arg(char **str, int count)
{
	int	i;
	int	j;

	i = 0;
	while (i < count)
	{
		j = 0;
		while (str[i][j])
		{
			if ((str[i][j] < '0' || str[i][j] > '9')
				&& str[i][j] != '+' && str[i][j] != '-')
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

static int	doublon(char **str, int count)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	while (i < count)
	{
		j = i + 1;
		while (j < count)
		{
			if (ft_strlen(str[i]) >= ft_strlen(str[j]))
				size = ft_strlen(str[i]);
			else
				size = ft_strlen(str[j]);
			if (ft_strncmp(str[i], str[j], size) == 0)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	verif_args_bonus(char **str, int count)
{
	int	i;

	i = 0;
	if (doublon(str, count) != 0 || char_in_arg(str, count) != 0)
		return (0);
	while (str[i])
	{
		if (ft_atoi(str[i]) == 3000000000)
			return (0);
		i++;
	}
	return (1);
}
