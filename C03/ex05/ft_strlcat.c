/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 08:56:35 by mben-cha          #+#    #+#             */
/*   Updated: 2024/08/04 10:17:06 by mben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len_dest;
	unsigned int	len_src;
	char			*pt;

	pt = dest;
	i = 0;
	len_dest = 0;
	len_src = 0;
	while (*pt)
	{
		pt++;
		len_dest++;
	}
	while (src[len_src] != '\0')
		len_src++;
	if (size == 0 || size <= len_dest)
		return (size + len_src);
	while (*src && i < size - len_dest -1)
	{
		*pt++ = *src++;
		i++;
	}
	*pt = '\0';
	return (len_dest + len_src);
}
