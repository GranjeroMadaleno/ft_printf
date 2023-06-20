/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:03:24 by andefern          #+#    #+#             */
/*   Updated: 2023/06/20 17:23:48 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>

void	ft_putchar(char c);
void	ft_putstr(char *s);
int		ft_putnbr(int n);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_hex(unsigned long n, int up_or_low);
int		ft_retstr(char *str);
int		ft_uputnbr(unsigned int n);
size_t	ft_strlen(const char *s);

#endif