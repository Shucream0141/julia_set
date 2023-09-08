/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sendo <sendo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 15:14:09 by sendo             #+#    #+#             */
/*   Updated: 2023/06/28 11:12:54 by sendo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	length(long int i)
{
	int	length;

	length = 0;
	if (i == 0)
		return (1);
	if (i < 0)
	{
		i *= -1;
		length++;
	}
	while (i > 0)
	{
		i /= 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			i;
	long int	nb;

	nb = n;
	i = length(nb);
	str = malloc(i + 1);
	if (!(str))
		return (NULL);
	str[i--] = '\0';
	if (nb == 0)
		str[0] = '0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = nb * -1;
	}
	while (nb > 0)
	{
		str[i--] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (str);
}

// int main()
// {
//     long num = 0;
//     char *str = ft_itoa(num);

//     if (str != NULL)
//     {
//         printf("%s", str);
//         free(str);  // メモリの解放
//     }
//     // int num1 = length(0);
//     // printf("%d",num1);
//     return (0);
// }
