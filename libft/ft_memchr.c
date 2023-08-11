/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim   <folim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 02:28:07 by folim             #+#    #+#             */
/*   Updated: 2023/05/07 02:28:09 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int ch, size_t n)
{
	size_t				i;
	const unsigned char	*ptr;

	ptr = (const unsigned char *) str;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char) ch)
			return ((void *)(ptr + i));
		i++;
	}
	return ((void *) NULL);
}

/*
int main () 
{
    const char str[] = "http://www.tutorialspoint.com";
    const char ch = '.';
    char *ret, *ret2;
    size_t len;

    len = 0;
    while(str[len] != 0)
        len++;     
    ret = memchr(str, ch, len);
    ret2 = ft_memchr(str, ch, len);

    printf("String after |%c| is - |%s|\n", ch, ret);
    printf("String after |%c| is - |%s|\n", ch, ret2);

    return(0);
}*/