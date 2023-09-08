/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atod.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sendo <sendo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:35:24 by sendo             #+#    #+#             */
/*   Updated: 2023/09/07 18:00:01 by sendo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

double	str_to_d(char *str, double num)
{
	int	i;

	i = 1;
	while (*str >= '0' && *str <= '9' && i < 7)
	{
		num = num * 10 + *str - '0';
		str++;
		i++;
	}
	if (*str != '.')
		return (num);
	str++;
	i = 1;
	while (*str >= '0' && *str <= '9' && i < 7)
	{
		num = num + (*str - '0') * pow(10, -i);
		str++;
		i++;
	}
	if ((*str < '0' || *str > '9') && *str != '\0')
		return (-100);
	else
		return (num);
}

double	ft_advanced_atod(char *str)
{
	int		count;
	double	num;
	int		i;

	count = 0;
	i = 1;
	while ((*str > 8 && *str < 14) || *str == 32)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			count++;
		str++;
	}
	num = str_to_d(str, 0);
	if (count == 1)
		num *= -1;
	else if (count > 1)
		num = 0;
	return (num);
}

// #include <stdio.h>
// int main(int argc, char **argv)
// {
// 	double d;

// 	argc =1;
// 	d = ft_advanced_atod(argv[1]);
// 	printf("%lf",d);

// }//floatでやるとなぜか精度がバカ下がるのでこっちにしました