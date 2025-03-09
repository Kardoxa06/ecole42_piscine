/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozkose <ozkose@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 11:46:55 by ozkose            #+#    #+#             */
/*   Updated: 2025/03/07 11:51:02 by ozkose           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_revursive_factorial(int nb)
{
	if (nb == 0 && nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		return (nb * ft_revursive_factorial(nb - 1));
	}
}

// #include <stdio.h>
// int main()
// {
//     printf("%d", ft_revursive_factorial(5));
// }