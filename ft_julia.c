/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_julia.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sendo <sendo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:29:19 by sendo             #+#    #+#             */
/*   Updated: 2023/09/07 20:45:04 by sendo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	calculate_splitj(t_data *data, t_math_compl *co, int i, int j)
{
	int	k;

	k = 0;
	while (k < 100)
	{
		co->re_tmp = co->real * co->real - co->imag * co->imag + data->x;
		co->im_tmp = 2 * co->real * co->imag + data->y;
		co->real = co->re_tmp;
		co->imag = co->im_tmp;
		if (co->real * co->real + co->imag * co->imag > 4)
		{
			my_mlx_pixel_put(data, i, j, k * k * k * k);
			break ;
		}
		k++;
	}
}

void	calculate_julia(t_data *data)
{
	t_math_compl	co;
	int				i;
	int				j;
	int				k;

	i = 0;
	j = 0;
	k = 0;
	co.pixel = 1000;
	while (i < co.pixel)
	{
		j = 0;
		while (j < co.pixel)
		{
			k = 0;
			co.real = i * (data->size / co.pixel) - (data->size / 2);
			co.imag = -(j * (data->size / co.pixel) - (data->size / 2));
			calculate_splitj(data, &co, i, j);
			j++;
		}
		i++;
	}
}