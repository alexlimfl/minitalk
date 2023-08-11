/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:08:26 by folim             #+#    #+#             */
/*   Updated: 2023/05/10 13:08:28 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s_out;
	size_t	len1;
	size_t	len2;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	s_out = (char *) malloc(len1 + len2 + 1);
	if (!s_out)
		return (NULL);
	i = -1;
	while (++i < len1)
		s_out[i] = s1[i];
	i = -1;
	while (++i < len2)
		s_out[len1 + i] = s2[i];
	s_out[len1 + i] = 0;
	return (s_out);
}

/*
int main()
{
    char *s = ft_strjoin("", "42");

    printf("%s\n",s);

    return(0);
}*/