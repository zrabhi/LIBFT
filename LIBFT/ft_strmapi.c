/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:27:36 by zrabhi            #+#    #+#             */
/*   Updated: 2021/11/23 20:39:42 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*char	all(unsigned int i, char c)
{
	c = c-32;
	return(c);
}*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;
	int		len;

	if(s && f)
	{
		i = 0;
		len = ft_strlen(s);
		str = (char *)malloc(sizeof(char) * (len + 1));
		if (!str)
			return (NULL);
		while (s[i])
		{
			str[i] = f(i, s[i]);
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	else
		return (NULL);
}
/*int main()
{
	//char (*p)(unsigned int, char) = &all;
//printf("%s", ft_strmapi("hell oworld", all));
}*/
