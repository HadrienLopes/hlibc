#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char		*ptr;
	char		*ptr2;
	char		**table;
	unsigned int	count;
	unsigned int i;

	count = 0;
	ptr = (char*)s;
	if (s == NULL)
		return (NULL);
	while (*ptr == c)
		ptr++;
	if (*ptr == '\0')
		return (NULL);
	while (*ptr != '\0')
	{
		if (!(ptr2 = ft_strchr(ptr, c)))
		{
			count++;
			break ;
		}
		if (ptr2 - ptr)	
			count++;
		ptr = ++ptr2;
	}
	if (!(table = (char**)malloc(sizeof(char*) * (count + 1))))
		return (NULL);
	i = 0;
	ptr = (char*)s;
	while (*ptr != '\0')
	{
		if (!(ptr2 = ft_strchr(ptr, c)))
		{
			if (!(table[i] = ft_strdup(ptr)))
			{
				//ft_tabdeli(*table, i - 1);
				return (NULL);
			}
			i++;
			break ;
		}
		if (ptr2 - ptr)
		{
			if (!(table[i] = ft_strndup(ptr, ptr2 - ptr)))
			{
				//ft_tabdeli(*table, i );
				return (NULL);
			}
			i++;
		}
		ptr = ++ptr2;
	}
	table[i] = NULL;
	return (table);
}

