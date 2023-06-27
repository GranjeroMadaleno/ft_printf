/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 15:37:14 by andefern          #+#    #+#             */
/*   Updated: 2023/06/27 16:40:39 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_support(va_list things, char c)
{
	if (c == 'c')
	{
		ft_putchar(va_arg(things, unsigned int));
		return (1);
	}
	else if (c == 's')
		return (ft_retstr(va_arg(things, char *)));
	else if (c == 'p')
	{
		write(1, "0x", 2);
		return (ft_hex(va_arg(things, unsigned long), 0) + 2);
	}
	else if (c == 'd')
		return (ft_putnbr(va_arg(things, int)));
	else if (c == 'i')
		return (ft_putnbr(va_arg(things, int)));
	else if (c == 'u')
		return (ft_uputnbr(va_arg(things, unsigned int)));
	else if (c == 'x')
		return (ft_hex(va_arg(things, unsigned int), 0));
	else if (c == 'X')
		return (ft_hex(va_arg(things, unsigned int), 1));
	else if (c == '%')
		return (write(1, "%", 1));
	return (0);
}

int	ft_printf(const char *print, ...)
{
	va_list	things;
	int		i;
	int		p;

	va_start(things, print);
	i = 0;
	p = 0;
	if (ft_strlen(print) == 1 && print[i] == '%')
		return (p);
	while (print[i])
	{
		if (print[i] == '%' && print[i + 1])
		{
			p += ft_support(things, print[i + 1]);
			i++;
		}
		else
		{
			ft_putchar((unsigned int)print[i]);
			p++;
		}
		i++;
	}
	va_end(things);
	return (p);
}

/* int	main(void)
{
	int	a;

	a = 214748;
	printf("%d\n", a);
	ft_printf("%d", a);
}
 */