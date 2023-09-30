/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_julia.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shucream <shucream@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:29:19 by sendo             #+#    #+#             */
/*   Updated: 2023/09/30 22:31:30 by shucream         ###   ########.fr       */
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
			my_mlx_pixel_put(data, i, j, k * k * k);
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

	i = 0;
	while (i < 1000)
	{
		j = 0;
		while (j < 1000)
		{
			co.real = i * (data->size / 1000) - (data->size / 2);
			co.imag = -(j * (data->size / 1000) - (data->size / 2));
			calculate_splitj(data, &co, i, j);
			j++;
		}
		i++;
	}
}

/*
x = co.real
y = co.imag

- (data->size/2) means (x - a)
window i = (data->size / 2)   -> math     x = 0      {x - (data->size / 2)}
window j = (data->size / 2)   -> math     y = 0      {y - (data->size / 2)}


i,j           -> pixel's 
1000          -> window's size
data->size    -> magnification
*/
