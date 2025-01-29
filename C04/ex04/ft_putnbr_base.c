/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 10:28:50 by mben-cha          #+#    #+#             */
/*   Updated: 2024/08/10 09:02:29 by mben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	char	*pt;
	int		count;

	pt = str;
	count = 0;
	while (*pt)
	{
		pt++;
		count++;
	}
	return (count);
}

int	check_invalid_argument(char *base)
{
	char	*pt;

	if (*base == '\0' || *(base + 1) == '\0')
		return (0);
	while (*base)
	{
		if (*base == '-' || *base == '+')
			return (0);
		pt = base;
		while (*pt != '\0')
		{
			if (*(pt + 1) == *base)
				return (0);
			pt++;
		}
		base++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	nb;
	long int	arr[50];
	int			i;

	i = 0;
	nb = nbr;
	if (check_invalid_argument(base) == 0)
		return ;
	if (nb == 0)
	{
		write(1, &base[0], 1);
		return ;
	}
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	while (nb > 0)
	{
		arr[i++] = nb % ft_strlen(base);
		nb = nb / ft_strlen(base);
	}
	while (i)
		write(1, &base[arr[--i]], 1);
}
