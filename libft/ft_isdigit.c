/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sendo <sendo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 20:09:33 by sendo             #+#    #+#             */
/*   Updated: 2023/06/23 15:17:23 by sendo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

// #include <ctype.h>
// #include <stdio.h>
// 	//数字なら１を返す。
// int	main(void)
// {
// 	int c;
// 	c = isdigit('9');
// 	printf("%d\n", c);
// 	c = ft_isdigit('9');
// 	printf("%d\n", c);
// 	return (0);
// }