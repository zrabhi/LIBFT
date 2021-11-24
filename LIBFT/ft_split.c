/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 12:27:46 by zrabhi            #+#    #+#             */
/*   Updated: 2021/11/23 21:04:29 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	**free_str(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

static int	ft_words(const char *s, char c)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (s[i])
	{
		if ((s[i] != c && s[i + 1] == c) || (s[i] != c && s[i + 1] == '\0'))
			words++;
	i++;
	}
	return (words);
}

static char	**ft_cat(char **str, const char *s, char c, int len)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (i < len)
	{
		k = 0;
		while (s[j] && s[j] == c)
			j++;
		while (s[j] && s[j] != c)
		{
			str[i][k] = s[j];
			j++;
			k++;
		}
	str[i][k] = '\0';
	i++;
	}
	str[i] = 0;
	return (str);
}

char	**ft_split(const char *s, char c)
{
	char	**str;
	int		i;
	int		j;
	int		k;
	int		len;

	if (!s)
		return (NULL);
	len = ft_words(s, c);
	i = -1;
	str = (char **)malloc(sizeof(char *) * (len + 1));
	if (!str)
		return (NULL);
	j = 0;
	while (++i < len)
	{
		k = 0;
		while (s[j] && s[j] == c)
			j++;
		while (s[j] && s[j++] != c)
			k++;
		str[i] = (char *)malloc(sizeof(char) * (k + 1));
		if (!str[i])
			return (free_str(str));
	}
	return (ft_cat(str, s, c, len));
}	
