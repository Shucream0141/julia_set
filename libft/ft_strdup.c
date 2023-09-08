/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sendo <sendo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 16:00:52 by sendo             #+#    #+#             */
/*   Updated: 2023/06/23 15:29:42 by sendo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*cpy;
	int		size;

	size = ft_strlen(s1) + 1;
	cpy = (char *)malloc(size);
	if (cpy == NULL)
		return (NULL);
	ft_memcpy(cpy, s1, size);
	return (cpy);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main() {
//     const char *original = "Hello, World!";

//     // 自作関数ft_strdupで文字列のディープコピーを作成
//     char *duplicate = ft_strdup(original);

//     if (duplicate == NULL) {
//         printf("Failed to duplicate the string.\n");
//         return (1);
//     }

//     // オリジナルとディープコピーを比較
//     if (strcmp(original, duplicate) == 0) {
//         printf("String duplication succeeded.\n");
//         printf("Original: %s\n", original);
//         printf("Duplicate: %s\n", duplicate);
//     } else {
//         printf("String duplication failed.\n");
//     }

//     // ディープコピーのメモリを解放
//     free(duplicate);

//     return (0);
// }
