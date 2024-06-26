/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elilliu <elilliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:20:32 by elilliu           #+#    #+#             */
/*   Updated: 2023/12/18 11:27:54 by elilliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		while (s[i] && s[i] == c)
			i++;
	}
	return (count);
}

int	word_len(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

void	free_tab(char **tab, int row)
{
	while (row >= 0)
		free (tab[row--]);
	free (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		row;

	i = 0;
	row = 0;
	tab = (char **) ft_calloc(sizeof(char *), (count_words(s, c) + 1));
	if (!tab)
		return (0);
	while (row < count_words(s, c))
	{
		while (s[i] == c)
			i++;
		tab[row] = (char *) ft_calloc(sizeof(char), word_len(&s[i], c) + 1);
		if (!tab[row])
		{
			free_tab(tab, row - 1);
			return (0);
		}
		ft_strlcpy(tab[row], &s[i], word_len(&s[i], c) + 1);
		while (s[i] && s[i] != c)
			i++;
		row++;
	}
	return (tab[row] = NULL, tab);
}
