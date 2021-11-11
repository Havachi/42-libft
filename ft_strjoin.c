/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arossi <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 14:12:46 by arossi            #+#    #+#             */
/*   Updated: 2021/10/22 11:36:34 by arossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_copystr(char *dest, char *src, int offset)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	while (i <= len)
	{
		dest[i + offset] = src[i];
		i++;
	}
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*new;
	size_t			len1;
	size_t			len2;

	if (!(s1) || !(s2))
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	new = malloc(sizeof(char) * (len1 + len2) + 1);
	if (new == NULL)
		return (new);
	ft_copystr(new, (char *)s1, 0);
	ft_copystr(new, (char *)s2, ft_strlen(s1));
	new[len1 + len2 + 1] = '\0';
	return (new);
}
