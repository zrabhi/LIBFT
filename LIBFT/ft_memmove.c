/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:09:29 by zrabhi            #+#    #+#             */
/*   Updated: 2021/11/23 12:20:38 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*void	*ft_memmove(void *dst, const char *src, size_t len)
{
	size_t i;

	i = ft_strlen(src);	
	while(i < len)
	{
		((char *)dst)[i] = src[i];
		i--;
	}
	return ((char *)dst);
}
int main()
{
	char dst[6] = "";
	printf("my fucnction 0.: %s\n", ft_memmove(dst, "hey james", 7));
	char str[6] = "ll";
	printf("\n%s", memmove(str, "hey james", 6));
}*/
void	*ft_memmove(void *dst, void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	*temp;
	size_t			len;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	temp = s;
	len = n;
	if (d == s)
		return (d);
	else
	{
		while (d != s && len > 0)
		{
			s++;
			len --;
		}
		if (d == s)
			while (n-- > 0)
				d[n] = temp[n];
		else
			ft_memcpy(d, temp, n);
	}
	return (d);
}
