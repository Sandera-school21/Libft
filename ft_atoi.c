#include "libft.h"

int	ft_atoi(const char *str)
{
	long s;
	unsigned long r;
	int i;

	r = 0;
	i = 0;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	s = (*str == '-') ? -1 : 1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		if (i++ > 18)
		{
			if ((r > sizeof(unsigned long)) && s == 1)
				return (-1);
			if ((r > sizeof(unsigned long)) && s == -1)
				return (0);
		}
		r = (r * 10) + (*str++ - 48);
	}
	return ((int)r * (int)s);
}