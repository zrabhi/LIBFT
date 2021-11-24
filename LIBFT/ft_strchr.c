/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:16:22 by zrabhi            #+#    #+#             */
/*   Updated: 2021/11/23 12:41:20 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return (((char *)(s + i)));
		i++;
	}
	if (s[i] == (char )c)
		return (((char *)(s + i)));
	return (0);
}
/*int main()
{
	printf("%s", ft_strchr("hey james ho are you", 'w'));
	printf(">>>>>%s", strchr("hey james ho are you", 'w'));
}*/
