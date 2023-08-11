/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim   <folim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 22:01:03 by folim             #+#    #+#             */
/*   Updated: 2023/05/06 22:01:05 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
	{
		if (str[i] == (char) c)
			return ((char *) str + i);
		i--;
	}
	return (NULL);
}

/*
char *ft_strrchr(const char *str, int c)
{
    unsigned int i;

    i = 0;
    
    while(str[i] != 0) //cursor moves to null
    {
        i++;
    }

    while(str[i] != c) //reverse checking
    {
        if(i == 0 && str[i] != c)
            return NULL;

        i--;
    }
    return ((char*) str+i);
}*/
/*
int main()
{
    char str[] = ",Hello world, hey!";
    char *comma2 = strrchr(str,',');
    char *comma3 = ft_strrchr(str,',');
    printf("comma2 %s\n",comma2);
    printf("comma3 %s\n",comma3);
    return 0;
}*/