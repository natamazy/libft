/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natamazy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:06:59 by natamazy          #+#    #+#             */
/*   Updated: 2024/01/22 11:07:01 by natamazy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*return_str;

	if (s == NULL)
		return ("");
	return_str = (char *) malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!return_str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		return_str[i] = f(i, s[i]);
		i++;
	}
	return_str[i] = '\0';
	return (return_str);
}
