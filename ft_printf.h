/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:03:24 by andefern          #+#    #+#             */
/*   Updated: 2023/06/20 15:30:18 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_putnbr(unsigned int n, char flag);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_Hex(int n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
char	*ft_strdup(const char *s1);
int		ft_retstr(char *str);
int		ft_toupper(int c);
int		ft_tolower(int c);
size_t	ft_strlen(const char *s);

#endif