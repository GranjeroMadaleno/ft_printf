/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 15:37:14 by andefern          #+#    #+#             */
/*   Updated: 2023/06/13 17:24:39 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

int	ft_support(va_list things, char c)
{
	if (c == 'c')
		return (ft_putchar(va_arg(things, int)));
	if (c == 's')
		return (ft_putstr(va_arg(things, int)));
	if (c == 'p')
		return (ft_putchar(va_arg(things, int)));
	if (c == 'd')
		return (ft_putnbr(va_arg(things, int), 1));
	if (c == 'i')
		return (ft_putnbr(va_arg(things, int), 1));
	if (c == 'u')
		return (ft_putnbr(va_arg(things, int), 0));
	if (c == 'x')
		return (ft_tolowerh(va_arg(things, int)));
	if (c == 'X')
		return (ft_toupperh(va_arg(things, int)));
	if (c == '%')
		return (ft_putchar(va_arg(things, int)));
}

int	ft_printf(const char *print, ...)
{
	va_list	things;
	int		i;
	int		len;

	va_start(things, print);
	i = 0;
	while (print[i])
	{
		if (print[i] == '%')
			len = ft_support(things, print[i + 1]);
		i++;
	}
	va_end(things);
	return (len);
}

int	main(void)
{
	ft_printf();
}

PRINTF("%c", p);