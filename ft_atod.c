/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atod.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shucream <shucream@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:35:24 by sendo             #+#    #+#             */
/*   Updated: 2023/09/30 22:26:25 by shucream         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void exit_print()
{
    ft_printf("args error\n");
    exit(1);
}

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
    if (*str == '\0')
        return (num);
    if (*str != '.' || (*(str + 1) < '0' || *(str + 1) > '9'))
        exit_print();
	str++;
	i = 1;
	while (*str >= '0' && *str <= '9' && i < 7)
	{
		num = num + (*str - '0') * pow(10, -i);
		str++;
		i++;
	}
    if (*str != '\0')
        exit_print();
		return (num);
}

double  ft_advanced_atod(char *str)
{
    int     count;
    double  num;
    int flag;

    count = 0;
    flag = 0;
    while ((*str > 8 && *str < 14) || *str == 32)
        str++;
    while (*str == '+' || *str == '-')
    {
        if (*str == '-')
            count++;
        str++;
        flag++;
    }
    if(*str == '\0' || flag >= 2 )
        exit_print();
    num = str_to_d(str, 0);
    if (count == 1)
        num *= -1;
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