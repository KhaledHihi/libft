/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khhihi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 22:06:08 by khhihi            #+#    #+#             */
/*   Updated: 2024/10/22 22:15:07 by khhihi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*s11;
	char	*s22;

	i = 0;
	s11 = (char *)s1;
	s22 = (char *)s2;
	while (s11[i] == s22[i])
		i++;
	return (s11[i] - s22[i]);
}
