/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khhihi <khhihi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:21:23 by khhihi            #+#    #+#             */
/*   Updated: 2024/11/02 11:06:29 by khhihi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dl;
	size_t	sl;

	i = 0;
	dl = 0;
	sl = ft_strlen(src);
	while (dst[dl] && dl < size)
		dl++;
	if (dl == size)
		return (size + sl);
	if (i < size - 1)
	{
		while (src[i] && (dl + i) < size - 1)
		{
			dst[dl + i] = src[i];
			i++;
		}
	}
	dst[dl + i] = '\0';
	return (dl + sl);
}
