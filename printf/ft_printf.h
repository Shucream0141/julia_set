/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sendo <sendo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 13:01:11 by sendo             #+#    #+#             */
/*   Updated: 2023/07/31 11:32:08 by sendo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_flag(const char *str, va_list *ap);
int		ft_printf(const char *str, ...);
int		ft_put_char(char c);
int		ft_put_nbr(int n);
int		ft_put_str(const char *str, int ap);
void	ft_putnbr_fd(int n, int fd);
int		ft_put_unsint(unsigned int n);
int		ft_put_hexs(unsigned int n);
int		ft_put_hexl(unsigned int n);
int		ft_put_hexlong(unsigned long long n);
int		ft_put_address(void *add);

#endif
