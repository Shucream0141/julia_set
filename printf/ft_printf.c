/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sendo <sendo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:24:21 by sendo             #+#    #+#             */
/*   Updated: 2023/07/31 12:46:28 by sendo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	size_t	i;
	size_t	count;

	va_start(ap, str);
	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			count += ft_flag(&str[i], &ap);
			i++;
		}
		else
		{
			count += ft_put_str(&str[i], 0);
			while (str[i] != '\0' && str[i] != '%')
				i++;
		}
	}
	va_end(ap);
	return (count);
}

// #include <stdio.h>

// int main()
// {
// 	printf("%s\n","%5%");
// 	ft_printf("%s\n","%5%");
// }

// int	main(void)
// {
// 	char			*s;
// 	char			c;
// 	int				i;
// 	unsigned int	u;
// 	unsigned int	x;
// 	char			*ch;
// 	int				display;

// 	s = "asdfghjkl";
// 	c = 'a';
// 	i = -15;
// 	u = 5;
// 	x = 256;
// 	ch = NULL;
// 	display = printf("asdfgh%c%s%paaaaa%d%i%u%x%X%%", c, s, &s, i, i, u, x, x);
// 	printf("\n%d\n", display);
// 	printf("\n");
// 	display = ft_printf("asdfgh%c%s%paaaaa%d%i%u%x%X%%", c, s, &s, i, i, u, x,
//			x);
// 	printf("\n%d\n", display);
// 	display = printf("\n%s\n", ch);
// 	printf("\n%d\n", display);
// 	display = ft_printf("\n%s\n", ch);
// 	printf("\n%d\n", display);
// 	return (0);
// }
