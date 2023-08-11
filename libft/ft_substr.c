/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 11:35:15 by folim             #+#    #+#             */
/*   Updated: 2023/05/10 11:35:16 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_substr(char const *s, unsigned int start, size_t len);

// int main() {
//     char string[] = "Hello, World!";
//     char *substring = ft_substr(string, 14, 3);

//     printf("Substring: %s\n", substring);

//     return 0;
// }

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*s_out;

	if (!s)
		return (0);
	if (start + len > ft_strlen(s))
		len = ft_strlen(s) - start;
	if (start >= ft_strlen(s))
		len = 0;
	s_out = (char *)malloc(len + 1);
	if (!s_out)
		return (0);
	i = -1;
	j = 0;
	while (s[++i])
	{
		if (i >= start && j < len)
		{
			s_out[j] = s[i];
			j++;
		}
	}
	s_out[j] = 0;
	return (s_out);
}
