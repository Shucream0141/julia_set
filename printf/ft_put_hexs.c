/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hexs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sendo <sendo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:59:02 by sendo             #+#    #+#             */
/*   Updated: 2023/07/08 12:59:02 by sendo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hexs(unsigned int n);

int	ft_put_hexs(unsigned int n)
{
	int	count;

	count = 1;
	ft_print_hexs(n);
	while (n / 16)
	{
		n = n / 16;
		count++;
	}
	return (count);
}

void	ft_print_hexs(unsigned int n)
{
	int	x;

	if (n < 16)
	{
		if (n >= 10)
		{
			x = n % 10 + 'a';
			write(1, &x, 1);
		}
		else
		{
			x = n % 16 + '0';
			write(1, &x, 1);
		}
	}
	else
	{
		ft_print_hexs(n / 16);
		ft_print_hexs(n % 16);
	}
}

// #include <stdio.h>

// int main()
// {
//     unsigned int x = 0;
//     unsigned int y = 256;
//     while(x < y)
//     {
//         int a = printf("%x",x);
//         printf(" %d\n",a);

//         a = ft_put_hexs(x);
//         printf(" %d\n",a);
//         x++;
//     }
//     return (0);
// }