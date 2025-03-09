/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozkose <ozkose@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 11:45:27 by ozkose            #+#    #+#             */
/*   Updated: 2025/03/07 11:46:13 by ozkose           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	total;

	total = 1;
	if (nb < 0)
	{
		return (29);
	}
	while (nb >= 1)
	{
		total *= nb;
		nb--;
	}
	return (total);
}

// #include <stdio.h>
// int main(void)
// {
// 	printf("%d", ft_iterative_factorial(5));
// }