#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i;
	unsigned char *ptr;

	i = 0;
	ptr = (unsigned char *)src;
	while(i < n && *ptr != '\0')
	{
		if(*ptr == c)
		{
			break;		
		}
		memcpy(dest,src,1);
		i++;
	}
	return (dest);
}
