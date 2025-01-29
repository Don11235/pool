/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 20:22:52 by mben-cha          #+#    #+#             */
/*   Updated: 2024/08/14 19:22:24 by mben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

void	ft_copy(int size, char **strs, char *arr, char *sep)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i <= size - 1)
	{
		j = 0;
		k = 0;
		while (j < ft_strlen(strs[i]))
			*arr++ = strs[i][j++];
		while (k < ft_strlen(sep) && i < size - 1)
			*arr++ = sep[k++];
		i++;
	}
	*arr = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*arr;
	int		length;
	int		i;

	i = 0;
	length = 0;
	if (size == 0)
	{
		arr = malloc(1 * sizeof(char));
		*arr = '\0';
		return (arr);
	}
	while (i <= size - 1)
	{
		length = length + ft_strlen(strs[i]);
		i++;
	}
	length = length + ft_strlen(sep) * (size - 1);
	arr = malloc((length + 1) * sizeof(char));
	if (arr == NULL)
		return (NULL);
	ft_copy(size, strs, arr, sep);
	return (arr);
}
