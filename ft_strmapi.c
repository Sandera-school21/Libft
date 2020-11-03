#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *new_str;
	size_t i;
	size_t q;

	i = 0;
	if (!f || !s || !(new_str = ft_strdup(s)))
		return (0);
	q = ft_strlen(s);
	while (i < q)
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}