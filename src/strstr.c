char	*strstr(const char *haysack, const char *needle)
{
	unsigned int pos;
	unsigned int i;
	
	if (!*needle)
		return ((char*)haysack);
	pos = 0; 
	while (haysack[pos] != '\0')
	{
		if(haysack[pos] == needle[0])
		{
			i = 1;
			while (needle[i] != '\0' && haysack[pos + i] == needle[i])
				i++;
			if (needle[i] == '\0')
				return ((char *)&haysack[pos]);
		}
		pos++;
	}
	return (0);
}	
