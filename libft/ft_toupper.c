/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sendo <sendo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 14:35:52 by sendo             #+#    #+#             */
/*   Updated: 2023/06/30 16:14:34 by sendo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 'a' + 'A');
	else
		return (c);
}

// #include <ctype.h>

// int	main(void)
// {
// 	char a = toupper(' ');
// 	printf("%c\n", a);
// 	char b = toupper('a');
// 	printf("%c\n", b);
// 	//小文字になっているものは戻り値は大文字(正確にはint型で返る)。それ以外はそのまま表示される。
// 	char c = ft_toupper(' ');
// 	printf("%c\n", c);
// 	char d = ft_toupper('a');23+11+9
// 	printf("%c\n", d);
// 	return (0);
// }