/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozkose <ozkose@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 15:33:13 by ozkose            #+#    #+#             */
/*   Updated: 2025/03/09 07:18:28 by ozkose           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb > 3)
	{
		i = 3;
		while (i < nb)
		{
			if (nb % i)
				i++;
			else
				nb++;
		}
	}
	if (i > nb)
	{
		return (nb);
	}
	return (nb);
}
