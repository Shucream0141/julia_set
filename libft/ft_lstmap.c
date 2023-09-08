/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sendo <sendo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 15:14:32 by sendo             #+#    #+#             */
/*   Updated: 2023/06/27 19:19:39 by sendo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*fcontent;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	fcontent = ft_lstnew(f(lst->content));
	if (fcontent == NULL)
		return (NULL);
	newlist = fcontent;
	while (lst->next != NULL)
	{
		lst = lst->next;
		fcontent->next = ft_lstnew(f(lst->content));
		if (fcontent->next == NULL)
		{
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		fcontent = fcontent->next;
	}
	return (newlist);
}
