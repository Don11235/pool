/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 11:19:25 by mben-cha          #+#    #+#             */
/*   Updated: 2024/08/10 13:58:11 by mben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 2)
		return (2);
	if (nb % 2 == 0)
		nb++;
	while (i <= nb / 2)
	{
		if (nb % i == 0)
		{
			nb += 2;
			i = 2;
		}
		i++;
	}
	return (nb);
}
