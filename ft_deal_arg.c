/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_deal_arg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shucream <shucream@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 19:14:11 by sendo             #+#    #+#             */
/*   Updated: 2023/09/30 22:20:01 by shucream         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int ft_mouse_hook_julia(int button, int x, int y, t_data *data)
{
    x = x + y;
    if (button == 5)
    {
        mlx_destroy_image(data->mlx_add, data->img);
        data->size /= 1.1;
        data->img = mlx_new_image(data->mlx_add, 1000, 1000);
        if(data->img == NULL)
            exit(1);
    }
    if (button == 4)
    {
        mlx_destroy_image(data->mlx_add, data->img);
        data->size *= 1.1;
        data->img = mlx_new_image(data->mlx_add, 1000, 1000);
        if(data->img == NULL)
            exit(1);
    }
    data->addr = mlx_get_data_addr(data->img, &data->bits_per_pixel,
            &data->line_length, &data->endian);
    if(data->addr == NULL)
        exit(1);
    calculate_julia(data);
    mlx_put_image_to_window(data->mlx_add, data->mlx_window_add, data->img,
        0, 0);
    return (0);
}

int ft_mouse_hook_mandelbrot(int button, int x, int y, t_data *data)
{
    x = x + y;
    if (button == 5)
    {
        mlx_destroy_image(data->mlx_add, data->img);
        data->size /= 1.1;
        data->img = mlx_new_image(data->mlx_add, 1000, 1000);
        if(data->img == NULL)
            exit(1);
    }
    if (button == 4)
    {
        mlx_destroy_image(data->mlx_add, data->img);
        data->size *= 1.1;
        data->img = mlx_new_image(data->mlx_add, 1000, 1000);
        if(data->img == NULL)
            exit(1);
    }
    data->addr = mlx_get_data_addr(data->img, &data->bits_per_pixel,
            &data->line_length, &data->endian);
    if(data->addr == NULL)
        exit(1);
    calculate_mandelbrot(data);
    mlx_put_image_to_window(data->mlx_add, data->mlx_window_add, data->img,
        0, 0);
    return (0);
}

int ft_deal_mandelbrot(t_data *data)
{
    data->mlx_add = mlx_init();
    if(data->mlx_add == NULL)
        exit(1);
    data->mlx_window_add = mlx_new_window(data->mlx_add, 1000, 1000, "smash");
    if(data->mlx_window_add == NULL)
            exit(1);
    data->img = mlx_new_image(data->mlx_add, 1000, 1000);
    if(data->img == NULL)
            exit(1);
    data->addr = mlx_get_data_addr(data->img, &data->bits_per_pixel,
            &data->line_length, &data->endian);
    if(data->addr == NULL)
            exit(1);
    calculate_mandelbrot(data);
    mlx_put_image_to_window(data->mlx_add, data->mlx_window_add, data->img, 0,
        0);
    mlx_key_hook(data->mlx_window_add, key_hook, data);
    mlx_mouse_hook(data->mlx_window_add, ft_mouse_hook_mandelbrot, data);
    mlx_hook(data->mlx_window_add, 17, 1L << 17, ft_destroy_window, data);
    mlx_loop(data->mlx_add);
    return (0);
}

int ft_deal_julia(t_data *data)
{
    data->mlx_add = mlx_init();
    if(data->mlx_add == NULL)
        exit(1);
    data->mlx_window_add = mlx_new_window(data->mlx_add, 1000, 1000, "smash");
    if(data->mlx_window_add == NULL)
            exit(1);
    data->img = mlx_new_image(data->mlx_add, 1000, 1000);
    if(data->img == NULL)
            exit(1);
    data->addr = mlx_get_data_addr(data->img, &data->bits_per_pixel,
            &data->line_length, &data->endian);
    if(data->addr == NULL)
            exit(1);
    calculate_julia(data);
    mlx_put_image_to_window(data->mlx_add, data->mlx_window_add, data->img, 0,
        0);
    mlx_key_hook(data->mlx_window_add, key_hook, data);
    mlx_mouse_hook(data->mlx_window_add, ft_mouse_hook_julia, data);
    mlx_hook(data->mlx_window_add, 17, 1L << 17, ft_destroy_window, data);
    mlx_loop(data->mlx_add);
    return (0);
}

int ft_err_flag(t_data *data)
{
    if ((data->x > 2 || data->y > 2) && (data->x < -2 || data->y < -2))
        return (1);
    return (0);
}
