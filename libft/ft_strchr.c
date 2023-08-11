/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim   <folim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 14:55:34 by folim             #+#    #+#             */
/*   Updated: 2023/05/06 14:55:35 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] == (char) c)
			return ((char *)str + i);
		i++;
	}
	if (c == 0)
	{
		return ((char *)str + i);
	}
	return (NULL);
}

/*
int main()
{
    const char str[] = ",,fsf,sd, ";
    const char *comma = strchr(str, '\0');
    const char *comma1 = ft_strchr(str, '\0');
    printf("comma %s.\n",comma);
    printf("comma1 %s.\n",comma1);
    return 0;
}
*/
