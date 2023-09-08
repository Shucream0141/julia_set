/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sendo <sendo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 15:14:45 by sendo             #+#    #+#             */
/*   Updated: 2023/06/23 16:36:29 by sendo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char buf1[] = "\0abc\0de"; /* 途中に空文字のある文字列 */
// 	char buf2[] = "\0abc\0de";
// 	char buf3[] = "\0abcdef";

// 	int a;
// 	a = memcmp(buf1, buf3, 7);
// 	printf("%d\n", a);
// 	a = ft_memcmp(buf1, buf3, 7);
// 	printf("%d\n", a);
// 	if (memcmp(buf1, buf2, 7) == 0)
// 		printf("memcmpbuf1 = buf2\n");
// 	else
// 		printf("memcmpbuf1 != buf2\n");

// 	if (memcmp(buf1, buf3, 5) == 0)
// 		printf("memcmpbuf1 = buf3\n");
// 	else
// 		printf("memcmpbuf1 != buf3\n");

// 	if (ft_memcmp(buf1, buf2, 7) == 0)
// 		printf("ft_membuf1 = buf2\n");
// 	else
// 		printf("ft_membuf1 != buf2\n");

// 	if (ft_memcmp(buf1, buf3, 5) == 0)
// 		printf("ft_membuf1 = buf3\n");
// 	else
// 		printf("ft_membuf1 != buf3\n");

// 	return (0);
// }