#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*buff;
	if (!(buff = (void*)malloc(size * nmemb)))
		return (0);
	ft_memset(buff,0,size * nmemb);
	return (buff);
}
