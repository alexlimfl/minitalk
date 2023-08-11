/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 19:21:42 by folim             #+#    #+#             */
/*   Updated: 2023/05/03 19:21:45 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Unsigned char must be used for accessing memory as a
//block of bytes or for small unsigned integers.
//can store values from 0 to 255, which perfectly
//matches the range of a byte, ensuring that it will
//fit within a single byte.

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*str_ptr;
	unsigned char	byte_value;

	str_ptr = str;
	byte_value = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		str_ptr[i] = byte_value;
		i++;
	}
	return (str_ptr);
}
