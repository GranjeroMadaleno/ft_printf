/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilities.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:15:58 by andefern          #+#    #+#             */
/*   Updated: 2023/06/20 14:07:47 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"


/* void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
} */

/* void	ft_putnbr(int n, int flag)
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
} */

// PARA HEXADECIMAL
void	ft_putnbr(unsigned int n, char flag)
{
	if (n > 9)
		ft_putnbr (n / 10, flag);
	write (1, &"0123456789abcdef"[n % 10], 1);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)

{
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (n--)
	{
		*d++ = *s++;
	}
	return (dst);
}

char	*ft_strdup(const char *s1)

{
	char	*dst;

	dst = malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (dst == NULL)
		return (NULL);
	ft_memcpy(dst, s1, ft_strlen(s1));
	dst[ft_strlen(s1)] = '\0';
	return (dst);
}
