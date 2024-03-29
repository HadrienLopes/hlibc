#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*ptr;

	if (!(ptr = malloc(size)))
		return (0);
	ft_bzero(ptr, size);
	return (ptr);
}
