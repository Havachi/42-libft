/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arossi <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 09:58:52 by arossi            #+#    #+#             */
/*   Updated: 2021/10/15 13:55:16 by arossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strstr(const char *haysack, const char *needle)
{
	unsigned int	pos;
	unsigned int	i;

	if (!*needle)
		return ((char *)haysack);
	pos = 0;
	while (haysack[pos] != '\0')
	{
		if (haysack[pos] == needle[0])
		{
			i = 1;
			while (needle[i] != '\0' && haysack[pos + i] == needle[i])
				i++;
			if (needle[i] == '\0')
				return ((char *)&haysack[pos]);
		}
		pos++;
	}
	return (0);
}	
