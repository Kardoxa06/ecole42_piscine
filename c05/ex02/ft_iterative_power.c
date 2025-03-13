/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozkose <ozkose@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 12:01:25 by ozkose            #+#    #+#             */
/*   Updated: 2025/03/12 03:30:08 by ozkose           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	total;
	int	i;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	total = nb;
	i = 1;
	while (i < power)
	{
		total *= nb;
		i++;
	}
	return (total);
}
