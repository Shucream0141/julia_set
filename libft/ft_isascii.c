/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sendo <sendo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 20:10:21 by sendo             #+#    #+#             */
/*   Updated: 2023/06/23 15:17:19 by sendo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

// //asciiコード内であれば真→１を返す
// #include <ctype.h>
// #include <stdio.h>

// int	main(void)
// {
// 	int	c;

// 	c = ft_isascii(128);
// 	printf("%d\n", c);
// 	c = isascii(128);
// 	printf("%d\n", c);
// 	return (0);
// }
