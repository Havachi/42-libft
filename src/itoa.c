#include "libft.h"

static int		ft_checknum(int num)
{
	int		numlen;

	numlen = 0;
	if (num == 0)
	{
		numlen = 1;
	}
	if (num < 0)
	{
		numlen++;
		num = -1 * num;
	}
	while (num != 0)
	{
		num = num / 10;
		numlen++;
	}
	return (numlen);
}

char			*ft_itoa(int n)
{
	int	numdig;
	char	*str;
	long	num;

	numdig = 0;
	num = (long)n;
	numdig = ft_checknum(n);
	if (!(str = malloc(numdig + 1)))
		return (NULL);
	str[numdig] = '\0';
	if (num == 0)
		str[0] = '0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	numdig--;
	while (numdig >= 0 && num != 0)
	{
		str[numdig] = num % 10 + '0';
		num = num / 10;
		numdig--;
	}
	return (str);
}
