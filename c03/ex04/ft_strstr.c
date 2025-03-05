/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozkose <ozkose@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 12:19:59 by ozkose            #+#    #+#             */
/*   Updated: 2025/03/05 12:27:56 by ozkose           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int p;

	p = 0;
	i = 0;

	if (to_find[i] == '\0')
		return (str);
	while (str[i])
	{
		while (str[i] && to_find[i] && str[i] == to_find[i])
		{
			i++;
			p++;
		}

	}
}