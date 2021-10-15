#include "libft.h"

static int		ft_wordscount(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i] != '\0')
			{
				i++;
			}
			if (s[i] == '\0')
				return (count);
		}
		i++;
	}
	return (count);
}

static char		**ft_freearray(char **strarr)
{
	int	i;

	i = 0;
	while (strarr[i])
	{
		free(strarr[i]);
		i++;
	}
	free(strarr);
	return (NULL);
}

static int		word_end(char *s, char c, int i)
{
	int		end;

	end = 0;
	while (s && s[i] && end != 1)
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i] != '\0')
				i++;
			end = 1;
		}
		if (end != 1)
			i++;
	}
	return (i);
}

static char		*ft_walloc(char *s, char c, int i, int j)
{
	char	*word;
	int	cut;

	cut = 0;
	while (s && *s && cut != 1)
	{
		if (*s != c)
		{
			while (s[i] != c && s[i] != '\0')
				i++;
			cut = 1;
		}
		if (cut != 1)
			s++;
	}
	if (!(word = malloc(i + 1)))
		return (NULL);
	while (s && *s && *s != c)
	{
		word[j] = *s++;
		j++;
	}
	word[j] = '\0';
	return (word);
}

char			**ft_split(char const *s, char c)
{
	char		**strarr;
	int		j;
	int		i;
	int		keep;

	if (!s)
		return (NULL);
	j = ft_wordscount(s, c);
	i = 0;
	keep = 0;
	if (!(strarr = malloc(sizeof(char *) * (j + 1))))
		return (NULL);
	strarr[j] = NULL;
	while (i < j)
	{
		if (!(strarr[i] = ft_walloc((char *)(s + keep), c, 0, 0)))
		{
			ft_freearray(strarr);
			return (NULL);
		}
		keep = word_end((char *)s, c, keep);
		i++;
	}
	return (strarr);
}

