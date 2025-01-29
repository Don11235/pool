/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 19:37:22 by mben-cha          #+#    #+#             */
/*   Updated: 2024/08/06 10:25:45 by mben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*pt;

	pt = str;
	while (*pt != '\0')
	{
		if (*pt > 64 && *pt < 91)
			*pt = *pt + 32;
		pt++;
	}
	return (str);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

char	*ft_strcapitalize(char *str)
{
	char	*pt;
	int		len;

	len = ft_strlen(str);
	if (len != 0)
	{
		pt = ft_strlowcase(str);
		while (--len)
		{
			if ((pt[len] > 96 && pt[len] < 123)
				&& (pt[len - 1] < 97 || pt[len - 1] > 122))
			{
				if (pt[len - 1] < 48 || pt[len - 1] > 57)
					pt[len] -= 32;
			}
		}
		if (pt[len] >= 'a' && pt[len] <= 'z')
			pt[len] -= 32;
	}
	return (str);
}
