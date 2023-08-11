/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim   <folim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 01:01:23 by folim             #+#    #+#             */
/*   Updated: 2023/05/08 01:01:25 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ch_len(const char *ch)
{
	size_t	len_ch;

	len_ch = 0;
	while (ch[len_ch])
		len_ch++;
	return (len_ch);
}

char	*ft_strnstr(const char *str, const char *ch, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	if (!*ch)
		return ((char *) str);
	if (n == 0)
		return (NULL);
	while (str[i] && i < n)
	{
		j = 0;
		k = i;
		while (str[i + j] == ch[j] && i + j < n)
		{
			j++;
			if (j == ch_len(ch))
				return ((char *)(str + k));
		}
		i++;
	}
	return (NULL);
}

// j = 0;//reset ch postion to array [0]
// k = i;//assign k the array position where first character in ch is found
/*
int main()
{
    char *str1 = "Hello how are you doing ?";
    char *str2 = "?";
    char *rstFT = ft_strnstr(str1,str2,25);

    if(rstFT == NULL)
        printf("not found\n");
    else
        printf("%s\n",rstFT);

    return 0;
}*/

// TEST 2.KO
// char *ft_strnstr(const char *str, const char *ch, size_t n)
// {
//     size_t i,j,k,len_ch;

//     len_ch = 0;
//     while(ch[len_ch])
//         len_ch++;
//     i = 0;
//     if(!*ch)
//         return (char*) str;
//     if(n == 0)
//         return NULL;
//     while(str[i] && i<n)
//     {
//         j = 0; //reset ch postion to array [0]
//         if(str[i] == ch[j])
//         {
//             k = i;
//assign k the array position where first character in ch is found
//             while(str[i] == ch[j] && i<n)
//             {
//                 i++;
//                 j++;
//                 if(j == len_ch)
//                 {
//                     return (char *) (str + k);
//                 }
//             }
//         }
//         else    
//             i++;
//     }
//     return NULL;
// }