/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 15:37:14 by andefern          #+#    #+#             */
/*   Updated: 2023/06/20 15:21:18 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
void	ft_putchar(char c)
{
	if (c == '%')
		write(1, "%", 1);
	else
		write(1, &c, 1);
}


int ft_Hex(int n)
{
	int i; 

	i = 0;
	if (n > 15)
		ft_Hex (n / 16);
	i += write (1, &"01233456789abcdef"[n % 16], 1);
	return (i);
}


int	ft_support(va_list things, char c)
{
	if (c == 'c')
	{
		ft_putchar(va_arg(things, unsigned int));
		return (1);
	}
	else if (c == 'X')
		return (ft_Hex(va_arg(things, unsigned int)));
	else if (c == 'd')
	{
		ft_putchar(va_arg(things, int));
		return (1);
	}
/* 	else if (c == 's')
		return (ft_retstr(va_arg(things, const char *))); */
/* 	else if (c == 'p')
		return (ft_Hex(va_arg(things, void *))); */
	return (0);
}


int	ft_printf(const char *print, ...)
{
	va_list	things;
	int		i;


	va_start(things, print);
	i = 0;
	while (print[i])
	{
		if (print[i] == '%')
			i += ft_support(things, print[i + 1]);
		else
			ft_putchar (print[i]);
		i++;
	}
	va_end(things);
	return (i);

}

int	main(void)
{
	//printf ("[%d]", 34);	
	ft_printf ("HACENDADO[%X]pipastijuana\n", 12);
	printf ("ORIGINAL[%X]pipastijuana\n", 12);
}
/* int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
	return (i);
} */
	