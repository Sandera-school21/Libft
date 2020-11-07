
#include "libft.h"

static int n_len(int n)
{
	int i;
	long long k;

	k = n;
	i = 1;
	if (k < 0)
	{
		k = k * -1;
		i++;
	}
	while (k >= 10)
	{
		k = k / 10;
		i++;
	}
	return (i);
}

static char	*ft_strrev(char *str)
{
	int idx;
	int size;
	char tmp;

	size = ft_strlen(str);
	idx = 0;
	while (idx < (size / 2)) {
		tmp = str[idx];
		str[idx] = str[size - idx - 1];
		str[size - idx - 1] = tmp;
		idx++;
	}
	return (str);
}
char *ret(char *str, long n, int len)
{
	int i;

	i = 0;
	if (n == 0)
		return (str);
	while (n != 0)
	{
		if (n < 9)
			str[i] = n + 48;
		str[i] = (n % 10) + 48;
		n = n / 10 ;
		i++;
	}
	str[i] = '\0';
	str = ft_strrev(str);

	return (str = ret(str, n, len));
}


char *ft_itoa(int l) {
	long long len;
	char *str;
	long n;

	n = (long)l;
	if (n == 0)
		return (ft_strdup("0"));
	len = n_len(n);
	if (!(str = ft_calloc(len + 1, sizeof(char))))
		return (0);
	if (n > 0)
		return (str = ret(str, n, len));
	else
		n = n * -1;
		str = ft_strjoin("-", (str = ret(str, n, len)));

	return (str);
}
