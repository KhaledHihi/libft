/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khhihi <khhihi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:59:03 by khhihi            #+#    #+#             */
/*   Updated: 2024/10/23 21:54:30 by khhihi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*arr[3];

	arr[1] = (char *)s1;
	arr[2] = (char *)s2;
	i = 0;
	j = 0;
	arr[0] = (char *)malloc(sizeof(char)
			* (ft_strlen(arr[1]) + ft_strlen(arr[2])) + 1);
	if (!arr[0])
		return (NULL);
	while (arr[1][i])
	{
		arr[0][i] = arr[1][i];
		i++;
	}
	while (arr[2][j])
		arr[0][i++] = arr[2][j++];
	arr[0][i] = '\0';
	return (arr[0]);
}
