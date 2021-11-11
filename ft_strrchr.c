/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arossi <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 09:58:34 by arossi            #+#    #+#             */
/*   Updated: 2021/10/28 11:10:03 by arossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*last_pos;

	last_pos = (0);
	while (*s)
	{
		if (*s == (unsigned char)c)
			last_pos = (char *)s;
		s++;
	}
	if (last_pos)
		return (last_pos);
	if ((unsigned char)c == '\0')
		return ((char *)s);
	return (0);
}
