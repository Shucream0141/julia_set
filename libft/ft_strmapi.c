/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sendo <sendo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 15:15:44 by sendo             #+#    #+#             */
/*   Updated: 2023/06/28 16:23:43 by sendo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	i = 0;
	if (!s || !f)
		return (NULL);
	str = ft_strdup(s);
	if (!str)
		return (NULL);
	while (str[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}

// static char	convert_char(unsigned int index, char c)
// {
// 	return (ft_toupper(c));
// }

// int	main(void)
// {
// 	const char	*str;
// 	char		*new_str;

// 	str = "Hello, world!";
// 	// ft_strmapi関数を使用して文字列を変換
// 	new_str = ft_strmapi(str, convert_char);
// 	if (new_str)
// 	{
// 		printf("Original string: %s\n", str);
// 		printf("Modified string: %s\n", new_str);
// 		free(new_str); // メモリを解放
// 	}
// 	return (0);
// }
