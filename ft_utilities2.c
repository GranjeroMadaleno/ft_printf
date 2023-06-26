/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilities2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:31:41 by andefern          #+#    #+#             */
/*   Updated: 2023/06/26 13:35:25 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_retstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (write(1, "(null)", 6));
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_uputnbr(unsigned int n)
{
	long		nb;
	int			printed;

	printed = 0;
	nb = n;
	if (nb > 9)
	{
		printed += ft_uputnbr((nb / 10));
		printed += ft_uputnbr((nb % 10));
	}
	else
	{
		nb = nb + '0';
		printed += write(1, &nb, 1);
	}
	return (printed);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_hex(unsigned long n, int up_or_low)
{
	int	i;

	i = 0;
	if (n > 15)
		i += ft_hex (n / 16, up_or_low);
	if (up_or_low == 0)
		i += write (1, &"0123456789abcdef"[(n % 16)], 1);
	if (up_or_low == 1)
		i += write (1, &"0123456789ABCDEF"[(n % 16)], 1);
	return (i);
}
