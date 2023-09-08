/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sendo <sendo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 14:52:04 by sendo             #+#    #+#             */
/*   Updated: 2023/06/23 15:26:16 by sendo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	if (!dst && !src)
		return (NULL);
	while (n--)
		((unsigned char *)dst)[n] = ((unsigned char *)src)[n];
	return (dst);
}

// // /*voidが引数になってるからキャストしてチャー型に直す。サイズ＿tも合わせる。*/
// int	main(void)
// {
// 	char dst[] = "1234567890";
// 	char src[] = "0987654";
// 	memcpy(dst, src, 10);
// 	printf("%s\n", dst);
// 	ft_memcpy(dst, src, 10);
// 	printf("%s\n", dst);
// 	return (0);
// }