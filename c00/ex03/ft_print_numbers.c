/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozkose <ozkose@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 13:29:12 by ozkose            #+#    #+#             */
/*   Updated: 2025/02/20 15:51:38 by ozkose           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	sayi;

	sayi = '0';
	while (sayi <= '9')
	{
		write(1, &sayi, 1);
		sayi++;
	}
}
