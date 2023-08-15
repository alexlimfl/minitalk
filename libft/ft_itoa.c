/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim   <folim@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 16:39:58 by folim             #+#    #+#             */
/*   Updated: 2023/05/12 16:40:01 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	length(int n)
{
	int	len;

	len = 0;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

// static int	is_negative(int n)
// {
// 	if (n < 0)
// 		return (1);
// 	return (0);
// }

static void	reverse(char *str, int length)
{
	int		i;
	char	temp;

	i = 0;
	while (i < length / 2)
	{
		temp = str[i];
		str[i] = str[length - i - 1];
		str[length - i - 1] = temp;
		i++;
	}
}

static char	*is_zero_or_int_min(int n)
{
	char	*str;

	if (n == 0)
	{
		str = malloc(2);
		if (!str)
			return (NULL);
		ft_strlcpy(str, "0\0", 2);
		return (str);
	}
	if (n == -2147483648)
	{
		str = malloc(12);
		if (!str)
			return (NULL);
		ft_strlcpy(str, "-2147483648\0", 12);
		return (str);
	}
	return (0);
}

char	*stringmaker(int n, int len, int negative)
{
	int		i;
	char	*str;

	str = malloc(len + negative + 1);
	if (!str)
		return (NULL);
	if (negative)
	{
		str[0] = '-';
		n *= -1;
	}
	i = negative;
	while (i < len + negative)
	{
		str[i] = (n % 10) + '0';
		n /= 10;
		i++;
	}
	str[len + negative] = '\0';
	reverse(str + negative, len);
	return (str);
}

char	*ft_itoa(int n)
{
	int		len;
	int		negative;
	char	*str;

	if (n == 0 || n == -2147483648)
	{
		str = is_zero_or_int_min(n);
		return (str);
	}
	len = length(n);
	if (n < 0)
		negative = 1;
	else
		negative = 0;
	str = stringmaker(n, len, negative);
	return (str);
}
/*
int main()
{
    int n = INT_MIN;
    char *str = ft_itoa(n);

    printf("n = %d\nstr = %s.\n",n,str);
    return (0);
}
*/