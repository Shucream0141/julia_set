/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sendo <sendo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 15:15:16 by sendo             #+#    #+#             */
/*   Updated: 2023/06/23 15:29:48 by sendo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}

// #include <stdio.h>

// void uppercase(unsigned int index, char *ch)
// {
//     if (*ch >= 'a' && *ch <= 'z')
//         *ch = *ch - 32;
// }

// void print_char(unsigned int index, char *ch)
// {
//     printf("Character at index %u: %c\n", index, *ch);
// }

// int main()
// {
//     char str[] = "Hello, world!";

//     printf("Original string: %s\n", str);

//     // 大文字に変換する
//     ft_striteri(str, uppercase);
//     printf("Uppercase string: %s\n", str);

//     // 文字を出力する
//     ft_striteri(str, print_char);

//     return (0);
// }
