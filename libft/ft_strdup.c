/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 17:52:22 by folim             #+#    #+#             */
/*   Updated: 2023/05/08 17:52:23 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//without ft_memcpy
char	*ft_strdup(const char *str)
{
	char	*output;
	int		i;
	int		len;

	len = 0;
	while (str[len])
		len++;
	if (!str)
		return (NULL);
	output = malloc(sizeof(char) * (len + 1));
	if (!output)
		return (NULL);
	i = 0;
	while (str[i] != 0)
	{
		output[i] = str[i];
		i++;
	}
	output[i] = '\0';
	return (output);
}

//with memcpy
/*
char *ft_strdup(const char *str)
{
    char *new_str;
    size_t len;

    len = 0;

    while(str[len])
        len++;

    new_str = malloc(len+1);

    if(!new_str)
        return NULL;

    return (char *)ft_memcpy(new_str, str, len);
}
*/
