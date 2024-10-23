/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khhihi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:59:03 by khhihi            #+#    #+#             */
/*   Updated: 2024/10/23 11:21:01 by khhihi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	int	i;
	int	j;
	int len;
	char *p;

	len = ft_strlen(s1) + ft_strlen(s2);
	i = 0;
	p = (char *)malloc(sizeof(char) * len + 1);
	if (!p)
		return (NULL);
	while (s1[i])
	{
		p[i] = (char *)s1[i];
			i++;
	}
	while(s2[j])
	{
		p[i] = (char *)s2[j];
		i++;
		j++;
	}
	return (p);
}
