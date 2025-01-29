/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 17:56:31 by mben-cha          #+#    #+#             */
/*   Updated: 2024/08/06 20:11:13 by mben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char	*hex;

	hex = "0123456789abcdef";
	while (*str)
	{
		if (*str < 32 || *str == 127)
		{
			write(1, "\\", 1);
			write(1, &hex[(unsigned char)*str / 16], 1);
			write(1, &hex[(unsigned char)*str % 16], 1);
		}
		else
			write(1, str, 1);
		str++;
	}
}
