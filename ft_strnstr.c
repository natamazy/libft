/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natamazy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:07:15 by natamazy          #+#    #+#             */
/*   Updated: 2024/01/22 11:07:17 by natamazy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_sns_m(const char *hay, const char *need, size_t len, size_t n_l)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	while (hay[i] && i < len)
	{
		if (hay[i] == need[0])
		{
			j = 0;
			k = i;
			while (hay[k] == need[j] && need[j] && hay[k] && k < len)
			{
				k++;
				j++;
			}
			if (j == n_l)
				return ((char *) hay + i);
		}
		i++;
	}
	return (NULL);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	if (haystack == NULL && len == 0)
		return (NULL);
	if (needle_len == 0)
		return ((char *) haystack);
	return (ft_sns_m(haystack, needle, len, needle_len));
}
