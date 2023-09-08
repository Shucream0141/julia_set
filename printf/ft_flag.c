/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sendo <sendo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:23:48 by sendo             #+#    #+#             */
/*   Updated: 2023/07/31 11:32:51 by sendo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_flag(const char *str, va_list *ap)
{
	if (*str == 'c')
		return (ft_put_char(va_arg(*ap, int)));
	else if (*str == 's')
		return (ft_put_str(va_arg(*ap, const char *), 1));
	else if (*str == 'p')
		return (ft_put_address(va_arg(*ap, void *)));
	else if (*str == 'i' || *str == 'd')
		return (ft_put_nbr(va_arg(*ap, int)));
	else if (*str == 'u')
		return (ft_put_unsint(va_arg(*ap, unsigned int)));
	else if (*str == 'x')
		return (ft_put_hexs(va_arg(*ap, unsigned int)));
	else if (*str == 'X')
		return (ft_put_hexl(va_arg(*ap, unsigned int)));
	else if (*str == '%')
		return (write(1, "%%", 1));
	return (0);
}
