/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sendo <sendo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 15:14:54 by sendo             #+#    #+#             */
/*   Updated: 2023/06/30 17:06:45 by sendo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	while (len--)
		((unsigned char *)b)[len] = (unsigned char)c;
	return (b);
}

// #include <string.h>

// int	main(void)
// {
// 	char	*buf= NULL;
// 	void *a;
// 	    a = ft_memset(buf, '6',3);
// 	printf("%s\n", buf);
// 	printf("%p\n",a);
// a = memset(buf, '1', 3);
// 	printf("%p\n",a);
//     printf("%s\n", buf);
// 	return (0);
// }
