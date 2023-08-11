/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 14:16:48 by folim             #+#    #+#             */
/*   Updated: 2023/05/08 14:16:50 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char	*s1;
	const unsigned char	*s2;
	size_t				i;

	s1 = str1;
	s2 = str2;
	i = 0;
	if (n <= 0)
		return (0);
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
int main ()
{
    char str1[15] = "abcdEf";
    char str2[15] = "abcdef";
    int ret;
    int retft;

    ret = memcmp(str1, str2, 5);
    retft = ft_memcmp(str1, str2, 5);


    if(ret > 0)
    {
        printf("str2 is less than str1 [%d]",ret);
    }  
    else if(ret < 0)
    {
        printf("str1 is less than str2 [%d]",ret);
    }
    else 
    {
        printf("str1 is equal to str2 [%d]",ret);
    }

    printf("\n");
   
    if(retft > 0)
    {
        printf("str2 is less than str1 [%d]",retft);
    }  
    else if(retft < 0)
    {
        printf("str1 is less than str2 [%d]",retft);
    }
    else 
    {
        printf("str1 is equal to str2 [%d]",retft);
    }
   return(0);
}*/