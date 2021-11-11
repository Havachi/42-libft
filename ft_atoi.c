/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arossi <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 09:27:31 by arossi            #+#    #+#             */
/*   Updated: 2021/10/22 11:25:21 by arossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	num;
	int	neg;
	int	i;

	neg = 1;
	num = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\0' || str[i] == '\n' || str[i] == '\t' \
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		num = num * 10 + ((str[i] - '0') * neg);
		i++;
	}
	return (num);
}
