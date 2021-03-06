/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 12:43:01 by zrabhi            #+#    #+#             */
/*   Updated: 2021/11/23 20:46:19 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*void	ft_upper(unsigned int i, char *s)
{
	i = 0;
	while(s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
			i++;
		}
}*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (s && f)
	{	
		i = 0;
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}
