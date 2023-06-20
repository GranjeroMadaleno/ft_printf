/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilities2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:31:41 by andefern          #+#    #+#             */
/*   Updated: 2023/06/20 14:08:04 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_toupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (c);
	}
	else if ((c >= 'a') && (c <= 'z'))
	{
		return (c - 32);
	}
	return (c);
}

int	ft_tolower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (c);
	}
	else if ((c >= 'A') && (c <= 'Z'))
	{
		return (c + 32);
	}
	return (c);
}

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
	while (str)
	{
		if (str[i] != '\0')
		{
			write(1, &str[i], 1);
			i++;
		}
		else
			write(1, "(null)", 6);
	}
	return (i);
}
