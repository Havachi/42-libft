/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_fd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arossi <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 11:22:45 by arossi            #+#    #+#             */
/*   Updated: 2021/10/15 11:23:28 by arossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	check_neg(long num, int fd)
{
	if (num < 0)
	{
		ft_putchar_fd('-', fd);
		return (-num);
	}
	return (num);
}

static int	ft_intlen(int num)
{
	int	numlen;
	int	neg;

	numlen = 0;
	neg = 0;
	if (num == 0)
	{
		numlen = 1;
	}
	if (num < 0)
	{
		numlen++;
		num = -1 * num;
		neg = 1;
	}
	while (num != 0)
	{
		num = num / 10;
		numlen++;
	}
	return (numlen - neg);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	num;
	int		numlen;
	int		sep;
	int		numlen2;

	num = (long)n;
	numlen = ft_intlen(n);
	sep = 1;
	numlen2 = numlen;
	if (num == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	num = check_neg((long)n, fd);
	while (--numlen > 0)
		sep = sep * 10;
	while (numlen2-- > 0)
	{
		ft_putchar_fd(((num / sep) + '0'), fd);
		num = num - ((num / sep) * sep);
		sep = sep / 10;
	}
}
