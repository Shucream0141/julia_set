/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shucream <shucream@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:52:51 by sendo             #+#    #+#             */
/*   Updated: 2023/09/30 22:17:13 by shucream         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	key_hook(int key, t_data *data)
{
	if (key == 53)
	{
		mlx_destroy_window(data->mlx_add, data->mlx_window_add);
		exit(0);
	}
	return (0);
}

void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int *)dst = color;
}

void	print_error(void)
{
	ft_printf("error!\n");
	ft_printf("if you want to see julia, three args are needed\n");
	ft_printf(",args must be under ±2.0\n");
	ft_printf("if you want to see mandelbrot, second arg is 42\n");
}

int	ft_destroy_window(t_data *data)
{
	mlx_destroy_window(data->mlx_add, data->mlx_window_add);
	exit(0);
}

int	main(int argc, char *argv[])
{
	t_data	data;

	data.size = 4;
	if (argc == 1)
	{
		print_error();
		return (0);
	}
	else if (argc == 2 && ft_advanced_atod(argv[1]) == 42)
		ft_deal_mandelbrot(&data);
	else if (argc == 3)
	{
		data.x = ft_advanced_atod(argv[1]);
		data.y = ft_advanced_atod(argv[2]);
		if (ft_err_flag(&data) == 1)
			return (1);
		ft_deal_julia(&data);
	}
	else
		print_error();
	return (0);
}
