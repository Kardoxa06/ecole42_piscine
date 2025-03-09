/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozkose <ozkose@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 12:10:59 by ozkose            #+#    #+#             */
/*   Updated: 2025/03/08 12:17:55 by ozkose           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 1)
		return (nb * ft_recursive_power(nb, (power - 1)));
	return (result);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%d \n", ft_recursive_power(0,0));
// 	printf("%d \n", ft_recursive_power(2,6));
// 	printf("%d \n", ft_recursive_power(2,5));
// 	printf("%d \n", ft_recursive_power(2,0));
// 	printf("%d \n", ft_recursive_power(2,1));
// }