/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozkose <ozkose@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 18:08:31 by ozkose            #+#    #+#             */
/*   Updated: 2025/03/10 16:26:21 by ozkose           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int sign;

	i = 0;
	sign = 1;
	while(str[i] && ((str[i] >= '0' && str[i] <= '9') 
	|| (str[i] == '-' || str[i] == '+') || (str[i] == ' ')))
	{
		if (str[i] == '-')
		{
			sign = sign * (-1);
			i++;
		}
		else if (str[i] == ' ' || str[i] == '+')
		{
			i++;
		}
		else
		{
		
			ft_putchar(str[i]);
			i++;
		}

	}
	return (0);
}
