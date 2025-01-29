/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 20:52:13 by mben-cha          #+#    #+#             */
/*   Updated: 2024/08/04 13:54:26 by mben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	char			*pt;

	pt = dest;
	i = 0;
	while (*pt)
		pt++;
	while (i < nb && *src)
	{
		*pt++ = *src++;
		i++;
	}
	*pt = '\0';
	return (dest);
}
