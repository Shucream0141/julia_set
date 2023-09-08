/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sendo <sendo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 16:55:36 by sendo             #+#    #+#             */
/*   Updated: 2023/06/29 17:32:11 by sendo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize > 0)
		dst[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}

// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
// 	int ft;
// 	int lib;
// 	char ft_dest[10];
// 	char ft_src[10] = "zzzzzzzzz";
// 	char lib_dest[10];
// 	char lib_src[10] = "zzzzzzzzz";
// 	ft = ft_strlcpy(ft_dest, ft_src, 0);
// 	lib = strlcpy(lib_dest, lib_src, 0);
// 	printf("ft :%s(%d)", ft_dest, ft);
// 	printf("\n");
// 	printf("lib:%s(%d)", lib_dest, lib);
// 	printf("\n");
// }

// int    main(void)
// {
//     int    len;
//     char buffer[10];
// 	char buffer1[10];

// 	char *src1 = calloc(10, sizeof(char));
// 	char *src2 = calloc(10, sizeof(char));
// 	ft_memset(src1, 'z', 9);
// 	ft_memset(src2, 'z', 9);

//     len = ft_strlcpy(buffer, "hello", 10);
//     printf("%d\n", len);
//     // printf("%s\n", str);
//     printf("%s\n", buffer);

//     len = strlcpy(buffer, "hello", 10);
//     printf("%d\n", len);
//     // printf("%s\n", str);
//     printf("%s\n", buffer);

// 	len = ft_strlcpy(buffer, "world", 10);
//     printf("%d\n", len);
//     // printf("%s\n", str);
//     printf("%s\n", buffer);

//     len = strlcpy(buffer, "world", 10);
//     printf("%d\n", len);
//     // printf("%s\n", str);
//     printf("%s\n", buffer);

// 	len = ft_strlcpy(buffer, src1, 0);
//     printf("%d\n", len);
//     // printf("%s\n", str);
//     printf("%s\n", buffer);

//     len = strlcpy(buffer1, src2, 0);
//     printf("%d\n", len);
//     // printf("%s\n", str);
//     printf("%s\n", buffer);
//     return (0);
// 	//dstsizeを指定することで、dstへsrcを何文字-1をコピーできる。
// 	//0を指定するとなぜかbuffer分全てをコピーする。dstsizeにdstより大きいものを代入すると、オリジナルはオーバーフローする。
// 	//dstsizeを変えることで戻り値が変わらないことからwhileを通したsrcの文字数だとわかる。
// }
