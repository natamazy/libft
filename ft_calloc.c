/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natamazy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:02:43 by natamazy          #+#    #+#             */
/*   Updated: 2024/01/23 14:02:32 by natamazy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ret_mem;

	if (count && size && count > (INT_MAX / size))
		return (NULL);
	ret_mem = malloc(count * size);
	if (!ret_mem)
		return (NULL);
	ft_bzero(ret_mem, count * size);
	return (ret_mem);
}
