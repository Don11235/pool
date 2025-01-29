/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 15:09:36 by mben-cha          #+#    #+#             */
/*   Updated: 2024/08/11 16:13:47 by mben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	i = 0;
	arr = malloc((max - min) * sizeof(int));
	if (min >= max)
		return (NULL);
	while (min < max)
	{
		arr[i++] = min;
		min++;
	}
	return (arr);
}
