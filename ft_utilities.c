/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilities.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:15:58 by andefern          #+#    #+#             */
/*   Updated: 2023/06/20 17:58:13 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long		nb;
	int			printed;

	printed = 0;
	nb = n;
	if (nb == -2147483648)
	{
		printed += write(1, "-2147483648", 11);
	}
	if (nb < 0)
	{
		nb *= -1;
		printed += write(1, "-", 1);
	}
	if (nb > 9)
	{
		printed += ft_putnbr((nb / 10));
		printed += ft_putnbr((nb % 10 + '0'));
	}
	else
	{
		nb = nb + '0';
		printed += write(1, &nb, 1);
	}
	return (printed);
}
