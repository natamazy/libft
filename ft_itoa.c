/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natamazy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:03:46 by natamazy          #+#    #+#             */
/*   Updated: 2024/01/22 11:03:48 by natamazy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numlen(int n)
{
	int	c;

	c = 0;
	if (n == -2147483648)
		return (11);
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		c++;
	}
	while (n != 0)
	{
		n = n / 10;
		c++;
	}
	return (c);
}

void	not_int_min(char *return_str, int n, int num_len, int finish)
{
	return_str[num_len--] = '\0';
	return_str[0] = '0';
	if (n < 0)
	{
		n = -n;
		return_str[finish++] = '-';
	}
	while (n != 0)
	{
		return_str[num_len--] = n % 10 + '0';
		n = n / 10;
	}
}

void	int_min(char *return_str)
{
	return_str[0] = '-';
	return_str[1] = '2';
	return_str[2] = '1';
	return_str[3] = '4';
	return_str[4] = '7';
	return_str[5] = '4';
	return_str[6] = '8';
	return_str[7] = '3';
	return_str[8] = '6';
	return_str[9] = '4';
	return_str[10] = '8';
	return_str[11] = '\0';
}

char	*ft_itoa(int n)
{
	char	*return_str;
	int		num_len;
	int		finish;

	finish = 0;
	num_len = ft_numlen(n);
	return_str = (char *) malloc(sizeof(char) * (num_len + 1));
	if (!return_str)
		return (NULL);
	if (n == -2147483648)
		int_min(return_str);
	else
		not_int_min(return_str, n, num_len, finish);
	return (return_str);
}
