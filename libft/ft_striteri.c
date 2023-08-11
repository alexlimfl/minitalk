/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:11:05 by folim             #+#    #+#             */
/*   Updated: 2023/05/15 14:11:06 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
void print_character(unsigned int index, char *character)
{
    printf("Character at index %d: %c\n", index, *character);
}
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{	
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*
int main()
{
    char str[] = "Hello!";
    ft_striteri(str, print_character);

    return 0;
}
*/
