/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sendo <sendo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 20:39:38 by sendo             #+#    #+#             */
/*   Updated: 2023/06/23 22:11:41 by sendo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

// #include <ctype.h>
// #include <stdio.h>

// int	main(void)
// {
// 	int c;
// 	c = ft_isprint(' ');
// 	printf("%d\n", c);
// 	c = isprint(' ');
// 	printf("%d\n", c);
// 	return (0);
// }