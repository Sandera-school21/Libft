#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t i;
	char *dest;
	i = 0;

	if (!(dest = (char*)malloc(sizeof(char) * (ft_strlen(str) + 1))))
		return (0);
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}