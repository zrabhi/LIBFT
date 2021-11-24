/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:17:50 by zrabhi            #+#    #+#             */
/*   Updated: 2021/11/23 16:31:16 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(((char *)s));
	while (len >= 0)
	{
		if (s[len] == (char)c)
			return (((char *)(s + len)));
		len--;
	}
	if (s[len] == (char)c)
		return (((char *)s + len));
	return (0);
}
/*int main()
{
printf("first string : %s", ft_strrchr("www.1337.ma", '\0'));
printf("\nsecond string : %s\n", strrchr("ww.1337.ma", '\0'));
}*/
