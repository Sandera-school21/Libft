#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int i;

	i = ft_strlen(str);
	while (i--)
	{
		if (str[i] == c)
			return ((char *)str + i);
	}
	if (c == '\0')
		return ((char *)str);
	return (0);
}

