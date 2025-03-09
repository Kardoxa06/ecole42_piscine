/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozkose <ozkose@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 20:45:19 by ozkose            #+#    #+#             */
/*   Updated: 2025/03/08 21:01:35 by ozkose           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_ascii(char *text)
{
	char	ascii[4];
	int	i;

	i = 0;
	while (text[i])
	{
		if (text[i] == '\0')
			return ;
		ascii[0] = (text[i] / 100) + '0';
		ascii[1] = ((text[i] / 10) % 10) + '0';
		ascii[2] = (text[i] % 10) + '0';
		ascii[3] = ' ';
		write(1, ascii, 4);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc > 1)
	{
		while (argv[i])
		{
			print_ascii(argv[i]);
			i++;
		}
	}
}
