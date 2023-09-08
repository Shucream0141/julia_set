/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sendo <sendo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 18:17:20 by sendo             #+#    #+#             */
/*   Updated: 2023/06/29 17:31:40 by sendo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	len;
	char	*trim;

	if (!s1 || !set)
		return (NULL);
	if (*s1 == '\0' && *set == '\0')
		return (ft_strdup(""));
	start = 0;
	while (ft_strchr(set, s1[start]) && s1[start])
		start++;
	len = ft_strlen(s1);
	while (ft_strchr(set, s1[len - 1]) && len > start)
		len--;
	trim = (char *)malloc(len - start + 1);
	if (!trim)
		return (NULL);
	ft_strlcpy(trim, s1 + start, len + 1);
	trim[len - start] = '\0';
	return (trim);
}

// int	main(void)
// {
// 	char const *s1 = "";
// 	char const *s2 = "";
// 	char *ret = ft_strtrim(s1, " \n\t");
// 	if (!strcmp(ret, s2))
// 		printf("oops%s\n", ret);
// 	return 0;
// }
