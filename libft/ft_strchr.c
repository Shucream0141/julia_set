/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sendo <sendo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 15:15:09 by sendo             #+#    #+#             */
/*   Updated: 2023/06/28 12:55:38 by sendo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if (c == 0)
		return ((char *)(s + i));
	return (NULL);
}

	// if (s == NULL)仕様署によると、見てからセグフォを返すらしい。
	// 	return (NULL);だからこの行はいらないみたい

// int	main(void)
// {
// 	const char	*str;
// 	const char	*p;
// 	int			c;

// 	str = "abcdefghijklmnabcdefghijklmn";
// 	c = 'a';
// 	p = ft_strchr(str, c);
// 	if (p != NULL)
// 	{
// 		printf("%cは文字列の%ld番目にあります。\n", c, p - str);
// 		printf("以降の文字列は%sです。\n", p);
// 	}
// 	else
// 		printf("%cは見つかりませんでした。\n", c);
// 	p = strchr(str, c);
// 	if (p != NULL)
// 	{
// 		printf("%cは文字列の%ld番目にあります。\n", c, p - str);
// 		printf("以降の文字列は%sです。\n", p);
// 	}
// 	else
// 		printf("%cは見つかりませんでした。\n", c);

// 	return (0);
// }