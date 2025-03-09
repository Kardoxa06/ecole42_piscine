/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozkose <ozkose@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 13:38:45 by ozkose            #+#    #+#             */
/*   Updated: 2025/03/09 07:18:22 by ozkose           ###   ########.tr       */
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
