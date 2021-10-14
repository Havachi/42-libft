int	ft_isspace(const char *str)
{
	if(*str == ' ' || *str == '\f' || *str == '\n' || *str == '\r' \
		|| *str == '\t' || *str == '\v')
		return (1);
	return(0);
}
