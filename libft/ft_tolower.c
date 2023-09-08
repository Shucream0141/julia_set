/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sendo <sendo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 20:46:56 by sendo             #+#    #+#             */
/*   Updated: 2023/06/23 15:31:12 by sendo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 'a' - 'A');
	else
		return (c);
}

// #include <ctype.h>

// int	main(void)
// {
// 	char a = tolower(' ');
// 	printf("%c\n", a);
// 	char b = tolower('Z');
// 	printf("%c\n", b);
// 	//大文字になっているものは戻り値は小文字(正確にはint型で返る)。それ以外はそのまま表示される。
// 	char c = ft_tolower(' ');
// 	printf("%c\n", c);
// 	char d = ft_tolower('Z');
// 	printf("%c\n", d);
// 	return (0);
// }