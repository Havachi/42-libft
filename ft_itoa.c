/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arossi <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 11:35:17 by arossi            #+#    #+#             */
/*   Updated: 2021/10/22 11:35:42 by arossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checknum(int num)
{
	int	numlen;

	numlen = 0;
	if (num == 0)
	{
		numlen = 1;
	}
	if (num < 0)
	{
		numlen++;
		num = -1 * num;
	}
	while (num != 0)
	{
		num = num / 10;
		numlen++;
	}
	return (numlen);
}

char	*ft_itoa(int n)
{
	int		numdig;
	char	*str;
	long	num;

	num = (long)n;
	numdig = ft_checknum(n);
	str = malloc(numdig + 1);
	if (!(str))
		return (NULL);
	str[numdig] = '\0';
	if (num == 0)
		str[0] = '0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	numdig--;
	while (numdig >= 0 && num != 0)
	{
		str[numdig--] = num % 10 + '0';
		num = num / 10;
	}
	return (str);
}
