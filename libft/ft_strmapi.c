/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 11:36:42 by folim             #+#    #+#             */
/*   Updated: 2023/05/15 11:37:07 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
char add_index(unsigned int i, char c)
{
    char output = (i + c);

    return output;
}
*/
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t			len;
	char			*result;
	unsigned int	i;

	if (!s)
		return (0);
	len = ft_strlen(s);
	result = malloc(len + 1);
	if (!result)
		return (0);
	if (len == 0)
	{	
		result[0] = '\0';
		return (result);
	}
	i = 0;
	while (i < len)
	{
		result[i] = (*f)(i, s[i]);
		result[len] = '\0';
		i++;
	}
	return (result);
}
/*
int main()
{
    char original_string[] = "ABCDEFG";
    char *mapped_string = ft_strmapi(original_string, add_index);

    printf("Original string: %s\n", original_string);
    printf("Mapped string: %s\n", mapped_string);

    free(mapped_string);

    return 0;
}*/
