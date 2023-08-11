/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:18:54 by folim             #+#    #+#             */
/*   Updated: 2023/05/15 15:18:55 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	char	c;

	if (nb < 0)
	{
		write (fd, "-", 1);
		nb = -nb ;
	}
	if (nb == -2147483648)
	{
		nb = -nb;
		write(fd, "2147483648", 10);
	}
	else if (nb > 9)
	{
		ft_putnbr_fd (nb / 10, fd);
		ft_putnbr_fd (nb % 10, fd);
	}
	else
	{
		c = (nb + 48);
		write(fd, &c, 1);
	}
}
