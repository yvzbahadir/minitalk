/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykilicar <ykilicar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:15:08 by ykilicar          #+#    #+#             */
/*   Updated: 2023/07/07 17:08:06 by ykilicar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	read_signal_bits(int signal)
{
	static int	n;
	static int	result;

	if (signal == SIGUSR1)
		result += (1 << n);
	n++;
	if (n == 8)
	{
		write(1, &result, 1);
		n = 0;
		result = 0;
	}
}

int	main(void)
{
	ft_printf("pid: %d\n", getpid());
	signal(SIGUSR1, read_signal_bits);
	signal(SIGUSR2, read_signal_bits);
	while (1)
		continue ;
}
