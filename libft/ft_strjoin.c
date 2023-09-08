/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sendo <sendo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:37:57 by sendo             #+#    #+#             */
/*   Updated: 2023/06/28 16:36:11 by sendo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	i;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	s3 = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s3)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		s3[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < ft_strlen(s2))
	{
		s3[ft_strlen(s1) + i] = s2[i];
		i++;
	}
	s3[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	return (s3);
}

// int	main(void)
// {
// 	char const *s1 = "where is my ";
// 	char const *s2 = "malloc ???";
// 	const char *s4 = "where is my malloc ???";
// 	char *s3 = ft_strjoin(s1, s2);
// 	if(!strcmp(s3,s4))
// 		return (0);
// 	printf("%s\n", s3);
// 	return (0);
// }