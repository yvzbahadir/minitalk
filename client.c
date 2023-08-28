/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykilicar <ykilicar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:14:34 by ykilicar          #+#    #+#             */
/*   Updated: 2023/07/07 17:09:13 by ykilicar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	g_signalcontrol;

void	send_signal(int pid, char c)
{
	int	i;

	i = 0;
	while (i <= 7)
	{
		if ((c >> i) & 1)
			g_signalcontrol = kill(pid, SIGUSR1);
		else
			g_signalcontrol = kill(pid, SIGUSR2);
		i++;
		usleep(200);
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 3)
	{
		while (av[2][i])
		{
			send_signal(ft_atoi(av[1]), av[2][i]);
			i++;
		}
	}
	else
	{
		ft_printf("3'ten fazla parametre girişi yaptınız!");
		return (1);
	}
	if (g_signalcontrol == 0)
		ft_printf("Sinyaliniz başarılı bir şekilde gönderildi!");
	else
		ft_printf("Sinyaliniz gönderilemedi! ");
	return (0);
}
