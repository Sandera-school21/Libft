#include "libft.h"

static char	**list_free(char **s, size_t i)
{
	while (s[i] != 0 && i >= 0)
	{
		free(s[i]);
		i--;
	}
	free(s);
	return (0);
}

static int c_list(char const *s, char c)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		if (*s == c)
			s++;
		else
		{
			i++;
			while (*s != '\0' && *s != c)
				s++;
		}
	}
	return (i);
}


char	**ft_split(char const *s, char c)
{
	char **list;
	int list_index;
	int count_sym;
	int delim_count;

	list_index = 0;
	delim_count = c_list(s,c);
	if (!s || !(list = (char **)malloc(sizeof(char *) * (c_list(s, c) + 1))))
		return (0);
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			count_sym = 0;
			while (*(s + count_sym) && *(s + count_sym) != c)
				count_sym++;
			if (list_index < delim_count && !(list[list_index++] = ft_substr(s,0,count_sym)))
				return (list_free(list,list_index));
			s = s + count_sym;
		}
	}
	list[list_index] = 0;
	return (list);
}
