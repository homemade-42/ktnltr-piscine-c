/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_analphabet.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qlatour <qlatour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:52:31 by qlatour           #+#    #+#             */
/*   Updated: 2024/01/17 15:15:35 by qlatour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_analphabet(void)
{
	write(1, "abcdefghijklmnopqrstuvwxyz", 26);
}
