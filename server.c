/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 22:04:12 by folim             #+#    #+#             */
/*   Updated: 2023/08/11 22:04:18 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf/ft_printf.h"
#include "libft/libft.h"
#include <signal.h>
#include <unistd.h>

void sig_handler(int signum, siginfo_t * info, void *context)
{
	int bit;
	int i;

	if (signum == SIGUSR1)
		bit = 0;
	else if (signum == SIGUSR2)
		bit = 1;




}

int	main()
{
	sigaction	sa;

	ft_printf("Server PID: %d", getpid());
	sa.sa_sigaction = sig_handler;

}