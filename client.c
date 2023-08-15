/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 01:11:06 by folim             #+#    #+#             */
/*   Updated: 2023/08/12 01:11:22 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf/ft_printf.h"
#include "libft/libft.h"
#include <signal.h>
#include <unistd.h>

void	respond_from_server(int signum)
{
	if (signum == SIGUSR2)
		ft_printf("Message received successfully!\n");
}

void	send_msg_to_server(pid_t server_pid, char *str)
{
	int	bit;
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		bit = 128;
		while (bit > 0)
		{
			if ((str[i] & bit) > 0)
				kill(server_pid, SIGUSR2);
			else
				kill(server_pid, SIGUSR1);
			bit >>= 1;
			usleep(420);
		}
		i++;
	}
	i = 8;
	while (--i != 0)
		kill(server_pid, SIGUSR1);
}

int	main(int argc, char **argv)
{
	pid_t				server_pid;
	struct sigaction	sa;

	if (argc == 3)
	{
		server_pid = ft_atoi(argv[1]);
		sa.sa_handler = respond_from_server;
		sigaction(SIGUSR1, &sa, 0);
		sigaction(SIGUSR2, &sa, 0);
		send_msg_to_server(server_pid, argv[2]);
	}
	else
	{
		ft_printf("Error\n");
		exit(1);
	}
	return (0);
}