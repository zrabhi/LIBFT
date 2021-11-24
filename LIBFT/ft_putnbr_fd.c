/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 12:16:03 by zrabhi            #+#    #+#             */
/*   Updated: 2021/11/24 13:33:18 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = nb * -1;
	}
	if (nb <= 9)
		ft_putchar_fd((nb + '0'), fd);
	if (nb > 9)
	{
		ft_putnbr_fd((nb / 10), fd);
		ft_putnbr_fd((nb % 10), fd);
	}
}
/*#include <stdio.h>
int main()
{
int fd;
fd = open("zzac.txt", O_RDWR);
if(fd == -1)
{
	printf(" -1failed to opne");
}

int n
;
n = 2345;
	ft_putnbr_fd(n, fd);
	ft_putchar_fd(n, fd);

}*/
