#include "libft.h"
int	ft_atoi(const char *str)
{
	int num;
	int neg;
	
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
		neg = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str && *str >= '0' && *str <= '9')
	{
		num = num * 10 +  (*str - 48);
		++str;
	}
	return (num * neg);
	
}
