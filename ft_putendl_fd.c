/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natamazy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:05:50 by natamazy          #+#    #+#             */
/*   Updated: 2024/01/22 11:05:52 by natamazy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (fd < 0)
		return ;
	if (!s)
	{
		write(fd, "(null)", 6);
		write(fd, "\n", 1);
		return ;
	}
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
