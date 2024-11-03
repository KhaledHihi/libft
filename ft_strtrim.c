/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khhihi <khhihi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:57:58 by khhihi            #+#    #+#             */
/*   Updated: 2024/11/03 20:59:32 by khhihi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isset(char s1, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (s1 == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		len;
	int		j;
	char	*arr[3];

	arr[1] = (char *)s1;
	arr[2] = (char *)set;
	len = ft_strlen(s1);
	i = 0;
	j = 0;
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	while (arr[1][i] && ft_isset(arr[1][i], arr[2]) == 1)
		i++;
	while (len > 0 && ft_isset(arr[1][len - 1], arr[2]) == 1)
		len--;
	if (len <= i)
		return (ft_strdup(""));
	arr[0] = malloc(sizeof(char) * (len - i + 1));
	if (!arr[0])
		return (NULL);
	while (i < len)
		arr[0][j++] = arr[1][i++];
	arr[0][j] = '\0';
	return (arr[0]);
}
