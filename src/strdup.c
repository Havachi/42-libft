#include "libft.h"
char *ft_strdup(const char *s)
{
	char *dup;
	char *ptr;
	size_t l;
		
	ptr = (char *)s;
	l = ft_strlen(ptr);
	dup = (char *)malloc(sizeof(char) * l+1);
	ft_memcpy(dup,s,l+1);
	return (dup);
}
