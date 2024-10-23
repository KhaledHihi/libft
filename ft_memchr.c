/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khhihi <khhihi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:47:47 by khhihi            #+#    #+#             */
/*   Updated: 2024/10/23 10:27:16 by khhihi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *s, int c, size_t n)
{
	size_t		i;
	char		*p;

	i = 0;
	p = (char *)s
		while (p[i])
	{
		if (p[i] == (char)c)
		return (p + i);
		i++;
	}
	return (void *)s;
}
