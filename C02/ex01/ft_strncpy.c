/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 20:53:13 by mben-cha          #+#    #+#             */
/*   Updated: 2024/07/31 09:15:05 by mben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	char			*pt;

	pt = dest;
	i = 0;
	while (i < n)
	{
		if (*src != '\0')
		{
			*pt = *src;
			pt++;
			src++;
		}
		else
		{
			*pt = '\0';
			pt++;
		}
		i++;
	}
	return (dest);
}
