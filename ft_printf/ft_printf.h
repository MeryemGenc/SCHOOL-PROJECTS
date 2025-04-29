/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgencali <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 15:01:48 by mgencali          #+#    #+#             */
/*   Updated: 2023/01/05 15:01:50 by mgencali         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int		ft_putchar(char c);
int		ft_putstr(char *str);
int		count_nbr(unsigned long nbr, int bs, int sign);
int		ft_putnbr(long int nbr);
int		ft_putnbr_hex(unsigned long nbr, char bs);

size_t	ft_strlen(char *str);

int		ft_printf(const char *str, ...);
#endif
