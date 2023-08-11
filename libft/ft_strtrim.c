/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 14:35:15 by folim             #+#    #+#             */
/*   Updated: 2023/05/10 14:35:17 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_trimmable(char c, const char *trim_set)
{
	while (*trim_set)
	{
		if (c == *trim_set)
			return (1);
		trim_set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1 || ft_strlen(s1) == 0)
		return (ft_strdup(""));
	start = 0;
	end = ft_strlen(s1) - 1;
	while (is_trimmable(s1[start], set))
		start++;
	while (end > start && is_trimmable(s1[end], set))
		end--;
	trimmed = (char *)malloc(end - start + 2);
	if (!trimmed)
		return (NULL);
	i = 0;
	while (start <= end)
	{
		trimmed[i] = s1[start];
		i++;
		start++;
	}
	trimmed[i] = 0;
	return (trimmed);
}

int main()
{
    char * s = ft_strtrim("   xxxtripouille   xxx", " xetri");

    char * s1 = ft_strtrim("", "123");

    printf("%s/\n",s);
    printf("%s/\n",s1);

    return 0;
}