#include "libft.h"

char		**ft_split(char *str)
{
	return ((ft_strsplit((const char*)str, ' ')));
}
