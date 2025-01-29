/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 13:43:05 by mben-cha          #+#    #+#             */
/*   Updated: 2024/08/11 14:17:11 by mben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*pt;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (src[len] != '\0')
		len++;
	pt = malloc((len + 1) * sizeof(char));
	if (pt == NULL)
		return (NULL);
	while (src[i])
	{
		pt[i] = src[i];
		i++;
	}
	pt[i] = '\0';
	return (pt);
}
