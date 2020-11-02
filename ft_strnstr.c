#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	start;

	if (*to_find == '\0')
		return ((char*)str);
	start = ft_strlen((char*)to_find);
	while (*str != '\0' && len-- >= start)
	{
		if (*str == *to_find && ft_memcmp(str, to_find, start) == 0)
			return ((char *)str);
		str++;
	}
	return (NULL);
}