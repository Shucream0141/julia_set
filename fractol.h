/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sendo <sendo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:53:09 by sendo             #+#    #+#             */
/*   Updated: 2023/09/08 14:38:52 by sendo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include "printf/ft_printf.h"
# include <math.h>
# include <mlx.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct sys_data_t
{
	double	x;
	double	y;
	void	*mlx_add;
	void	*mlx_window_add;
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
	double	size;
}			t_data;

typedef struct complex_t
{
	double	size;
	double	pixel;
	double	real;
	double	imag;
	double	re_tmp;
	double	im_tmp;
}			t_math_compl;

void		calculate_mandelbrot(t_data *data);
void		calculate_julia(t_data *data);
double		ft_advanced_atod(char *str);

int			ft_mouse_hook_mandelbrot(int button, int x, int y, t_data *data);
int			ft_mouse_hook_julia(int button, int x, int y, t_data *data);
int			key_hook(int key, t_data *data);

void		print_error(void);
int			ft_deal_julia(t_data *data);
int			ft_deal_mandelbrot(t_data *data);
int			ft_err_flag(t_data *data);

int			ft_destroy_window(t_data *data);
void		my_mlx_pixel_put(t_data *data, int x, int y, int color);

#endif