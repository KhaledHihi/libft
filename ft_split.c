/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khhihi <khhihi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:09:23 by khhihi            #+#    #+#             */
/*   Updated: 2024/11/03 17:54:55 by khhihi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countw(char const *s1, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s1[i])
	{
		while (s1[i] == c)
			i++;
		if (s1[i] && s1[i] != c)
			count++;
		while (s1[i] != c && s1[i])
			i++;
	}
	return (count);
}

static void	free_arr(char **p, int r)
{
	while (r--)
		free (p[r]);
	free (p);
}

static int	ft_count_char(int *start, int *i, char c, const char *s)
{
	int	i1;

	i1 = *i;
	*start = *i;
	while (s[i1] && s[i1] != c)
		i1++;
	*i = i1;
	return (i1);
}

static char	**get_next_word(char **p, char const *s, int i, int c)
{
	int	start;
	int	end;
	int	r;
	int	j;

	start = 0;
	r = 0;
	while (s[i])
	{
		end = ft_count_char(&start, &i, c, s);
		p[r] = malloc(sizeof(char) * (end - start) + 1);
		if (!p[r])
		{
			free_arr(p, r);
			return (NULL);
		}
		j = 0;
		while (start < end)
			p[r][j++] = s[start++];
		p[r++][j] = '\0';
		while (s[i] == c)
			i++;
	}
	p[r] = NULL;
	return (p);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**p;

	i = 0;
	p = (char **)malloc(sizeof(char *) * (ft_countw(s, c) + 1));
	if (!p)
		return (NULL);
	while (s[i] == c)
		i++;
	p = get_next_word(p, s, i, c);
	return (p);
}
