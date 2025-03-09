/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozkose <ozkose@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 15:26:16 by ozkose            #+#    #+#             */
/*   Updated: 2025/03/08 16:12:55 by ozkose           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	else if (nb <= 3)
		return (1);
	else if (nb > 3)
	{
		i = 3;
		while (i < nb)
		{
			if (nb % i)
				i++;
			else
				return (0);
		}
	}
	if (i > nb)
	{
		return (1);
	}
	return (1);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%d \n", ft_is_prime(3));
// 	printf("%d \n", ft_is_prime(23));
// 	printf("%d \n", ft_is_prime(25));
// }