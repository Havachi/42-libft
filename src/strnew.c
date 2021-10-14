#include "libft.h"
char	*ft_strnew(size_t lenght)
{
	if(!(lenght))
		return(NULL);
	char *temp = malloc(sizeof(char) * lenght);
	ft_memset(temp,'A',lenght);
	return(temp);
}
