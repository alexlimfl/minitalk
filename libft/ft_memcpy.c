/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 20:53:01 by folim             #+#    #+#             */
/*   Updated: 2023/05/03 20:53:03 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*ptrdest;
	const char	*ptrsrc;

	if (!dest && !src)
		return (0);
	ptrdest = (char *)dest;
	ptrsrc = (const char *)src;
	i = 0;
	while (i < n)
	{
		ptrdest[i] = ptrsrc[i];
		i++;
	}
	return (ptrdest);
}
	//Declaring the source buffer as a pointer to a const char type
	//also provides a safety feature by preventing the programmer from
	//modifying the source buffer accidentally