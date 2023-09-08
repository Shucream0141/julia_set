/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sendo <sendo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 15:27:16 by sendo             #+#    #+#             */
/*   Updated: 2023/07/02 14:52:01 by sendo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wordcount(char const *s, char c)
{
	size_t	word_count;
	size_t	i;

	word_count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			word_count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (word_count);
}

void	*freeall(char **split, size_t n)
{
	while (n--)
		free(split[n]);
	free(split);
	return (NULL);
}

char	*fput(char **split, const char *s, char c)
{
	int		i;
	size_t	index;
	size_t	start;

	i = 0;
	index = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			split[index] = (char *)malloc((i - start + 1) * sizeof(char));
			if (!split[index])
				return (freeall(split, index));
			ft_memmove(split[index], s + start, i - start);
			split[index][i - start] = '\0';
			index++;
		}
		else
			i++;
	}
	split[index] = NULL;
	return (*split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	if (!s)
		return (NULL);
	split = (char **)malloc((wordcount(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	fput(split, s, c);
	return (split);
}

// int	main(void)
// {
// 	int i = 4;
// 	char **s = ft_split("A bbBBbbCC", 'b');
// 	while (i--)
// 		printf("%s\n", s[i]);
// 	return (0);
// }

// int main() {
//     int n = 5;

//     while(n--) {
//         printf("%d\n", n);
//     }

//     return 0;
// }