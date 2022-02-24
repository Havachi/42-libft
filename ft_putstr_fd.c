/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr_fd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arossi <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 11:21:56 by arossi            #+#    #+#             */
/*   Updated: 2021/10/15 12:12:18 by arossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	len;

	if (!s)
		return (0);
	len = ft_strlen(s);
	write(fd, s, len);
	return (len);
}
