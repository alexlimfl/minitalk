/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 13:58:55 by folim             #+#    #+#             */
/*   Updated: 2023/06/21 13:05:02 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdint.h>
//# include <stdio.h>

void	*ft_bzero(void	*str, size_t	n);
void	*f_calloc(size_t	nmemb, size_t	size);
int		ft_convesion(va_list args, char c, int count);
int		ft_putchar(int c, int count);
int		ft_putstr(char *str, int count);
int		ft_putnbr(int nb, int count);
int		ft_un_int_putnbr(unsigned int nb, int count);
int		ft_hexadecimal(unsigned int nb, int c, int count);
int		ft_pointer(void *ptr, int count);
int		ft_puthexadecimal(uintptr_t address, int count);
int		ft_printf(const char *str, ...);

#endif
