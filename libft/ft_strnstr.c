/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sendo <sendo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 11:54:33 by sendo             #+#    #+#             */
/*   Updated: 2023/06/29 16:53:37 by sendo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	if (!haystack && len == 0)
		return (NULL);
	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *)haystack);
	while (*haystack != '\0' && len >= needle_len)
	{
		if (ft_strncmp(haystack, needle, needle_len) == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}

//haystack        ->ok      nocrash ok haystack||needle->nocrash nocrash ok
//haystack&&needle->ok      ok      crash
//needle          ->nocrash ok      crash

// // needleが空文字列の場合、haystackの先頭を返す
// // needleがhaystack内で見つかった場合、その位置を返す
// // needleが見つからない場合はNULLを返す
// #include <string.h>
// int main()
// {
// 	const char	*hay;
// 	const char *ne;
// 	const char	*p;
// 	size_t			c;

// 	hay = NULL;
// 	ne = "1";
// 	c = 0;
// 	p = ft_strnstr(hay,ne, c);
// 	if (p != NULL)
// 	{
// 		printf("%sは文字列の%ld番目にあります。\n", ne, p - hay);
// 		printf("以降の文字列は%sです。\n", p);
// 	}
// 	else
// 		printf("%sは見つかりませんでした。\n", ne);
// 	hay = NULL;
// 	ne = "1";
// 	c = 0;
// 	p = strnstr(hay,ne, c);
// 	if (p != NULL)
// 	{
// 		printf("%sは文字列の%ld番目にあります。\n", ne, p - hay);
// 		printf("以降の文字列は%sです。\n", p);
// 	}
// 	else
// 		printf("%sは見つかりませんでした。\n", ne);
// 	return (0);
// }