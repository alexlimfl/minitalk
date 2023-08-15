/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 17:09:37 by folim             #+#    #+#             */
/*   Updated: 2023/05/08 17:09:38 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t	nmemb, size_t	size)
{
	size_t			*ptr;
	size_t			total_size;

	total_size = nmemb * size;
	if (nmemb == SIZE_MAX || size == SIZE_MAX)
		return (0);
	ptr = malloc(total_size);
	if (!ptr)
		return (0);
	ft_bzero_libft(ptr, total_size);
	return (ptr);
}
//nmemb = number of members
//prevent potential overflow if requested size is too large
// if (nmemb < SIZE_MAX/size)
// 	return (0)