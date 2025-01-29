/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 16:30:27 by mben-cha          #+#    #+#             */
/*   Updated: 2024/08/14 17:25:19 by mben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	i;
	int	len;

	i = 0;
	len = max - min;
	arr = malloc(len * sizeof(int));
	*range = arr;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (arr == NULL)
	{
		*range = NULL;
		return (-1);
	}
	while (min < max)
	{
		arr[i++] = min;
		min++;
	}
	return (len);
}
