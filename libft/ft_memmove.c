/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sendo <sendo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 15:14:52 by sendo             #+#    #+#             */
/*   Updated: 2023/06/23 16:36:23 by sendo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	if (src > dst)
	{
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		while (len--)
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
	}
	return (dst);
}

// int	main(void)
// {
// 	char dst[] = "0987654321";
// 	char src[] = "0987654321";
// 	memmove(src+3, src, 6);
// 	printf("%s\n", src);
// 	ft_memmove(dst+3, dst, 6);
// 	printf("%s\n", dst);
// 	return (0);
// }