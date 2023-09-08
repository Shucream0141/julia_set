/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sendo <sendo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 16:44:04 by sendo             #+#    #+#             */
/*   Updated: 2023/06/28 16:31:03 by sendo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	size;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	if (start >= size || len == 0)
		return (ft_strdup(""));
	size = ft_strlen(s + start);
	if (size < len)
		len = size;
	sub = (char *)malloc(len + 1);
	if (sub == NULL)
		return (NULL);
	sub = ft_memcpy(sub, s + start, len + 1);
	sub[len] = '\0';
	return (sub);
}

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	size_t	count;
// 	size_t	size;
// 	char	*tab;

// 	if (!s)
// 		return (NULL);
// 	if ((unsigned int)ft_strlen(s) < start)
// 		return (ft_strdup(""));
// 	size = ft_strlen(s + start);
// 	if (size < len)
// 		len = size;
// 	if (!(tab = (char *)malloc((len + 1) * sizeof(char))))
// 		return (NULL);
// 	count = 0;
// 	while (count < len)
// 	{
// 		tab[count] = s[start + count];
// 		count++;
// 	}
// 	tab[count] = '\0';
// 	return (tab);
// }

// int	main(void)
// {
// 	char *str;
// 	char *nu = 0;
// 	str = ft_substr("1", 0, 1000000);
// 	printf("%s\n", nu);
// 	printf("%s\n", &str[0]);
// 	str = ft_substr("asdfghjkl", 3, 5);
// 	printf("%s", str);
// 	return (0);
// }