#include "libft.h"

size_t strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;

	i = 0;
	while (src[i] != '\0' && i < size)
	{
		dst[i] = src[i];
		i++;
	}	
	dst[i] = '\0';
	return(i);
}
