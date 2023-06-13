/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:15:58 by andefern          #+#    #+#             */
/*   Updated: 2023/06/13 17:54:11 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	if (c == '%')
		write(1, "%", 1);
	else
		write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}
void	ft_putnbr(int n, int flag)
{
	long		nb;

	nb = n;
	if (flag)
	{
		if (nb < 0)
		{
			nb *= -1;
			write(1, "-", 1);
		}
	}
	else
	{
		if (nb > 9)
		{
			ft_putnbr((nb / 10), flag);
			ft_putnbr((nb % 10), flag);
		}
		else
		{
			nb = nb + '0';
			write(1, &nb, 1);
		}
	}
}


// PARA HEXADECIMAL
/* void	ft_putnbr(unsigned int n, char flag)
{
	unsigned int	nb;
	char			*base;
	unsigned int	len;

	nb = n;
	base = "0123456789abcdef";
	if (nb > 0)
	{
		ft_putnbr((nb / 16), flag);
		ft_putnbr((nb % 16), flag);
	}
	len = ft_strlen(base);
	nb = nb + '0';
	if (flag == 'x')
		ft_tolower(nb);
	else
		ft_toupper(nb);
	write(1, &nb, 1);
} */