#include <mlx.h> //init
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define StructureNotifyMask (1L << 17)

typedef struct sys_data_t
{
	int		x;
	int		y;
	void	*mlx_add;
	void	*mlx_window_add;
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}			data_t;

typedef struct complex_t
{
	double size;  // 描く領域の一辺の長さ
	double pixel; // 描く領域の一辺のピクセル数
	double	real;
	double	imag;
}			math_compl_t;

int	key_hook(int key, data_t *data)
{
	if (key == 53)
	{
		mlx_destroy_window(data->mlx_add, data->mlx_window_add);
		exit(0);
	}
	else
		printf("aiueo");
	return (0);
}

void		my_mlx_pixel_put(data_t *data, int x, int y, int color);

void julia(data_t *data,int x, int y)
{
	math_compl_t complex;
	double	real_tmp;
	double	imag_tmp;
	int i;
	int j;

	i = 0;
	j = 0;
	while(i < 1000)
	{
		while(j < 1000)
		{
			real_tmp = complex.real * complex.real - complex.imag
				* complex.imag + x;
			imag_tmp = 2 * complex.real * complex.imag + y;
			complex.real = real_tmp;
			complex.imag = imag_tmp;
			if (complex.real * complex.real + complex.imag
				* complex.imag > 4)
			{
				my_mlx_pixel_put(data, complex.real, complex.imag, 0xE0FFFF);
				break ;
			}
		j++;
		}
	i++;
	}
}



void	calculate(data_t *data, double x, double y)
{
	math_compl_t	complex;
	double			real_tmp;
	double			imag_tmp;
	int				i;
	int				j;
	int				k;

	i = 0;
	j = 0;
	k = 0;
	complex.pixel = 1000;
	complex.size = 4;
	while (i < complex.pixel)
	{
		x = i * (complex.size / complex.pixel) - (complex.size / 2);
		j = 0;
		while (j < complex.pixel)
		{
			complex.real = 0;
			complex.imag = 0;
			y = j * (complex.size / complex.pixel) - (complex.size / 2);
			k = 0;
			while (k < 100)
			{
				real_tmp = complex.real * complex.real - complex.imag
					* complex.imag + x;
				imag_tmp = 2 * complex.real * complex.imag + y;
				complex.real = real_tmp;
				complex.imag = imag_tmp;
				if (complex.real * complex.real + complex.imag
					* complex.imag > 4)
				{
					my_mlx_pixel_put(data, i, j, 0xE0FFFF);
					break ;
				}
				k++;
			}
			j++;
		}
		i++;
	}
}

// int			ft_mouse_hook(int button,int x,int y,void *param)
// {
// 	if(button == 4)

// 	else if(button == 5)

// 	return (0);
// }

int	ft_destroy_window(data_t *data)
{
	mlx_destroy_window(data->mlx_add, data->mlx_window_add);
	exit(0);
}

void	my_mlx_pixel_put(data_t *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int *)dst = color;
}



int	main(void)
{
	data_t	data;
	void	*mlx;
	void	*mlx_window;

	mlx = mlx_init();
	mlx_window = mlx_new_window(mlx, 1000, 1000, "smash");
	data.img = mlx_new_image(mlx, 1000, 1000);
	data.mlx_add = mlx;
	data.mlx_window_add = mlx_window;
	data.addr = mlx_get_data_addr(data.img, &data.bits_per_pixel,
			&data.line_length, &data.endian);
	calculate(&data, 0, 0);
	mlx_put_image_to_window(mlx, mlx_window, data.img, 0, 0);
	mlx_key_hook(mlx_window, key_hook, &data);
	// mlx_mouse_hook(mlx_window, ft_mouse_hook, &data);
	mlx_hook(mlx_window, 17, StructureNotifyMask, ft_destroy_window, &data);
	mlx_loop(mlx);
	printf("完成");
}
