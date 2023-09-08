/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sendo <sendo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:25:49 by sendo             #+#    #+#             */
/*   Updated: 2023/07/31 11:31:09 by sendo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_str(const char *str, int ap)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (write(1, "(null)", 6));
	if (ap == 0)
	{
		while (str[i] != '\0' && str[i] != '%')
		{
			write(1, &str[i], 1);
			i++;
		}
	}
	else if (ap == 1)
	{
		while (str[i] != '\0')
		{
			write(1, &str[i], 1);
			i++;
		}
	}
	return (i);
}
