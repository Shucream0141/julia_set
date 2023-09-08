/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sendo <sendo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 20:56:41 by sendo             #+#    #+#             */
/*   Updated: 2023/06/28 15:03:04 by sendo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	length;

	length = 0;
	while (s[length] != '\0')
		length++;
	return (length);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	int c;
// 	char *s = NULL;
// 	c = ft_strlen(s);
// 	printf("%d\n", c);
// 	c = strlen(s);
// 	printf("%d\n", c);
// 	return (0);
// }