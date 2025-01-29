/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 09:01:55 by mben-cha          #+#    #+#             */
/*   Updated: 2024/08/04 11:28:56 by mben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*pt1;
	char	*pt2;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		pt1 = to_find;
		pt2 = str;
		while (*pt1 && *pt2 && (*pt1 == *pt2))
		{
			pt1++;
			pt2++;
		}
		if (*pt1 == '\0')
			return (str);
		str++;
	}
	return (0);
}
