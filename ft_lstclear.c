/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natamazy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:25:43 by natamazy          #+#    #+#             */
/*   Updated: 2024/01/22 17:35:59 by natamazy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*t;
	t_list	*l;

	if (!lst || !del)
		return ;
	l = *lst;
	while (l)
	{
		t = l->next;
		ft_lstdelone(l, del);
		l = t;
	}
	*lst = NULL;
}
