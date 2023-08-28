/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykilicar <ykilicar@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:14:58 by ykilicar          #+#    #+#             */
/*   Updated: 2023/07/07 17:07:19 by ykilicar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include "./utils/ft_printf.h"
# include <signal.h>
# include <unistd.h>

void	read_bits(int sig);
void	kill_bill(int pid, char c);

#endif
