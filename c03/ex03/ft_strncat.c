/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozkose <ozkose@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 11:58:41 by ozkose            #+#    #+#             */
/*   Updated: 2025/03/10 11:03:01 by ozkose           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	y;

	i = 0;
	y = 0;
	while (dest[y])
		y++;
	while (src[i] && i < nb)
	{
		dest[i + y] = src[i];
		i++;
	}
	dest[i + y] = '\0';
	return (dest);
}
