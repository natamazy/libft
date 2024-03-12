/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natamazy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:12:28 by natamazy          #+#    #+#             */
/*   Updated: 2024/01/23 11:55:48 by natamazy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*node;

	if (!lst || !f || !del)
		return (NULL);
	ret = NULL;
	node = NULL;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&ret, del);
			return (NULL);
		}
		ft_lstadd_back(&ret, node);
		lst = lst->next;
	}
	return (ret);
}
/*
void	*func(void *s)
{
	if (s)
		return (ft_strdup("OK !"));
	else
		return (NULL);
}
#include <stdio.h>

int	main(void)
{
	t_list *l = ft_lstnew(ft_strdup(" 1 2 3 "));
	t_list *ret;

	l->next = ft_lstnew(ft_strdup("ss"));
	l->next->next = ft_lstnew(ft_strdup("-_-"));
	ret = ft_lstmap(l, func, free);
	if (!ret)
		printf("ERROR");
	else
	{
		while (ret)
		{
			printf("%s\n", (char *)ret->content);
			ret = ret->next;
		}
	}
}*/
