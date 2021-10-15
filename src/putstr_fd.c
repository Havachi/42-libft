#include "libft.h"

void	ft_putstr_fd(char *str, int fd)
{
	int	i;

	i = 0;
	while(str && str[i] != '\0')
		ft_putchar_fd(str[i], fd);
}
