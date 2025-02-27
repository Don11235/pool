/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 13:59:46 by mben-cha          #+#    #+#             */
/*   Updated: 2024/07/31 10:24:42 by mben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*pt;

	pt = str;
	while (*pt != '\0')
	{
		if (*pt > 96 && *pt < 123)
			*pt = *pt - 32;
		pt++;
	}
	return (str);
}
