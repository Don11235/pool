/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 18:01:39 by mben-cha          #+#    #+#             */
/*   Updated: 2024/08/07 18:08:05 by mben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sq_root;

	sq_root = 0;
	if (nb < 0)
		return (0);
	while (sq_root * sq_root <= nb && sq_root <= 46340)
	{
		if (sq_root * sq_root == nb)
			return (sq_root);
		sq_root++;
	}
	return (0);
}
