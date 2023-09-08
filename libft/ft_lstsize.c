/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sendo <sendo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 15:14:38 by sendo             #+#    #+#             */
/*   Updated: 2023/06/23 15:22:53 by sendo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

// int main()
// {
//     // テスト用のリストを作成
//     t_list *node1 = malloc(sizeof(t_list));
//     t_list *node2 = malloc(sizeof(t_list));
//     t_list *node3 = malloc(sizeof(t_list));

//     node1->next = node2;
//     node2->next = node3;
//     node3->next = NULL;

//     // テスト用のリストの要素数を取得
//     int size = ft_lstsize(node1);

//     printf("List size: %d\n", size);

//     // メモリ解放
//     free(node1);
//     free(node2);
//     free(node3);

//     return (0);
// }