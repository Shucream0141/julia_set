/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sendo <sendo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 15:14:42 by sendo             #+#    #+#             */
/*   Updated: 2023/06/23 16:36:35 by sendo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)(s + i)) == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

//与えられたconst voidポインタsから文字列を操作するため、実際の型キャスティングする。
//一般に、castingはconst修飾子を持つポインタ型から変換するために使われることが多い。
// int	main(void)
// {
// 	char str[] = "Hello, World!";
// 	int searchChar = 'W';

// 	// 自作のmemchr関数を使用して文字を検索
// 	void *myResult = ft_memchr(str, searchChar, strlen(str));
// 	if (myResult != NULL)
// 	{
// 		printf("my_memchr: Character found at position %ld\n", (char *)myResult
// 				- str);
// 	}
// 	else
// 	{
// 		printf("my_memchr: Character not found\n");
// 	}

// 	// 標準のmemchr関数を使用して文字を検索
// 	void *stdResult = memchr(str, searchChar, strlen(str));
// 	if (stdResult != NULL)
// 	{
// 		printf("memchr: Character found at position %ld\n", (char *)stdResult
// 				- str);
// 	}
// 	else
// 	{
// 		printf("memchr: Character not found\n");
// 	}

// 	return (0);
// }