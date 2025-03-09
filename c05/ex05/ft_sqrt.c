/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozkose <ozkose@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 13:38:45 by ozkose            #+#    #+#             */
/*   Updated: 2025/03/08 15:24:18 by ozkose           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	else if (nb <= 1)
		return (1);
	else if (nb > 2)
	{
		i = 2;
		while (i <= nb)
		{
			if ((i * i) != nb)
				i++;
			else
				break ;
		}
	}
	if (i > nb)
	{
		return (0);
	}
	return (i);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%d \n", ft_sqrt(5));
// 	printf("%d \n", ft_sqrt(25));
// 	printf("%d \n", ft_sqrt(36));
// }