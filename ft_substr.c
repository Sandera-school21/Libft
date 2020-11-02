#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *new_str;
	size_t i;

	i = 0;
	if (!(new_str = (char *)malloc(sizeof(char) * (len + 1))) || !s)
		return (0);
	while (start < ft_strlen((char *)s) && s[start + i] && i < len)
	{
		new_str[i] = s[start + i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}