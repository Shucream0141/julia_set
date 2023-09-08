/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sendo <sendo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 17:47:13 by sendo             #+#    #+#             */
/*   Updated: 2023/06/28 13:37:22 by sendo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	ch;

	ch = (char)c;
	i = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	while (i)
	{
		if (s[i] == ch)
			return ((char *)(s + i));
		i--;
	}
	if (s[0] == ch)
		return ((char *)s);
	return (NULL);
}

// //s[3]は、s[0],s[1],s[2],s[3]の4バイトをとっている。strlenをすると、3となる。
// //ここでは、s[i] != '\0'ではなく,i--がよいだろう
// int	main(void)
// {
// 	const char *str = "libft-test-tokyo";
// 	int ch = 'l';

// 	char *ft_result = ft_strrchr(str, ch);
// 	char *std_result = strrchr(str, ch);

// 	printf("[%s]\n", ft_result);
// 	printf("[%s]\n", std_result);
// }