static char	get_alfnum(unsigned int upper, unsigned int index)
{
	if (index > 36)
		return (0);
	if (upper)
		return ("0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"[index]);
	return ("0123456789abcdefghijklmnopqrstuvwxyz"[index]);
}

char	*ft_ulltoa(unsigned long long n, char *buf, int base)
{
	char	*tmp;
	char	*p1;
	char	*p2;

	tmp = ft_calloc(64 + 1, sizeof(char));
	if (base < 2 || base > 36)
		return (0);
	while (n > 0)
	{
		*p1++ = get_alfnum(0, (n % (unsigned)base));
		n /= (unsigned)base;
	}
	p2 = buf;
	while (p1 != tmp)
		*p2++ = *--p1;
	*p2 = '\0';
	free(tmp);
	return buf;
}

char	*ft_ulltoau(unsigned long long n, char *buf, int base)
{
	char	tmp[64 + 1];
	char	*p1;
	char	*p2;

	if (base < 2 || base > 36)
		return (0);
	while (n > 0)
	{
		*p1++ = get_alfnum(1, (n % (unsigned)base));
		n /= (unsigned)base;
	}
	p2 = buf;
	while (p1 != tmp)
		*p2++ = *--p1;
	*p2 = '\0';
	return buf;
}
