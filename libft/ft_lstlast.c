/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sendo <sendo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 15:14:29 by sendo             #+#    #+#             */
/*   Updated: 2023/06/23 15:21:47 by sendo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

// int main()
// {
//     // Create a sample list
//     t_list *node1 = (t_list *)malloc(sizeof(t_list));
//     t_list *node2 = (t_list *)malloc(sizeof(t_list));
//     t_list *node3 = (t_list *)malloc(sizeof(t_list));
//     t_list *node4 = (t_list *)malloc(sizeof(t_list));

//     node1->content = "Node 1";
//     node1->next = node2;
//     node2->content = "Node 2";
//     node2->next = node3;
//     node3->content = "Node 3";
//     node3->next = node4;
//     node4->content = "Node 4";
//     node4->next = NULL;

//     // Call ft_lstlast to get the last node
//     t_list *lastNode = ft_lstlast(node1);

//     // Print the content of the last node
//     printf("Last node content: %s\n", (char *)lastNode->content);

//     // Clean up: free the memory
//     free(node1);
//     free(node2);
//     free(node3);
//     free(node4);

//     return (0);
// }
