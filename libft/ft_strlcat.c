/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sendo <sendo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:27:57 by sendo             #+#    #+#             */
/*   Updated: 2023/06/30 17:34:29 by sendo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	if (dst == NULL && dstsize == 0)
		return (ft_strlen(src));
	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	i = 0;
	if (dstsize <= dstlen)
		return (dstsize + srclen);
	while (src[i] != '\0' && dstlen + i < dstsize - 1)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}

// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
// 	int ft;
// 	int lib;
// 	char *ft_dest = NULL;
// 	char *ft_src = "fghi";
// 	char *lib_dest = NULL;
// 	char *lib_src = "fghi";
// 	ft = ft_strlcat(ft_dest, ft_src, 0);
// 	lib = strlcat(lib_dest, lib_src, 0);
// 	printf("ft :%s(%d)", ft_dest, ft);
// 	printf("\n");
// 	printf("lib:%s(%d)", lib_dest, lib);
// 	printf("\n");
// }

// int main()
// {
// 	//元の関数挙動テスト
// 	char dest1[20] = "ABCDE";
//     char src1[] = "1234";
//     int x = 9;

//     unsigned int result1 = strlcat(dest1, src1, x);
//     printf("%s: 戻り値%u\n", dest1, result1);
// 	char dest3[20] = "ABCDE";
//     char src3[] = "1234";
//     x = 7;

//     unsigned int result3 = strlcat(dest3, src3, x);
//     printf("%s: 戻り値%u\n", dest3, result3);

// 	char dest2[20] = "ABCDE";
//     char src2[] = "1234";
//     x = 0;
//     unsigned int result2 = strlcat(dest2, src2, x);
//     printf("%s: 戻り値%u\n", dest2, result2);
// 	//x<=4から戻り値は変わる。それ以上は５＋４＝９で固定、すなわちできるかどうかに関わらず作ろうとしたサイズ
// 	//x=>7から元のdestが変わる。dstsize-1=6でdstが５だからそれ以上から始まる
// 	//バッファオーバーランしない。
// 	//
// 	char dest4[20] = "ABCDE";
//     char src4[] = "1234";
//      x = 9;

//     unsigned int result4 = ft_strlcat(dest4, src4, x);
//     printf("%s: 戻り値%u\n", dest4, result4);
// 	char dest5[20] = "ABCDE";
//     char src5[] = "1234";
//     x = 7;

//     unsigned int result5 = ft_strlcat(dest5, src5, x);
//     printf("%s: 戻り値%u\n", dest5, result5);

// 	char dest6[20] = "ABCDE";
//     char src6[] = "1234";
//     x = 0;
//     unsigned int result6 = ft_strlcat(dest6, src6, x);
//     printf("%s: 戻り値%u\n", dest6, result6);
// }