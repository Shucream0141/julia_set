/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sendo <sendo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 14:35:52 by sendo             #+#    #+#             */
/*   Updated: 2023/06/23 15:30:33 by sendo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i + 1 < n && s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// #include<string.h>
// int main()
// {
// 	int c;
// 	c = ft_strncmp("abcdefghijklmnabcdefghijklmn","abcd",4);
// 	printf("%d\n",c);
// 	int a;
// 	a = strncmp("abcdefghijklmnabcdefghijklmn","abcd",4);
// 	printf("%d\n",a);
// 	return (0);
// }