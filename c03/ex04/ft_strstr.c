/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozkose <ozkose@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 12:19:59 by ozkose            #+#    #+#             */
/*   Updated: 2025/03/10 12:25:36 by ozkose           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	p;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i])
	{
		p = 0;
		while (str[i + p] == to_find[p])
		{
			if (to_find[p + 1] == '\0')
			{
				return (&str[i]);
			}
			p++;
		}
		i++;
	}
	return (0);
}
