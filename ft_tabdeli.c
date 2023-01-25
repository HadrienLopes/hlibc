#include "libft.h"

void ft_tabeli(char **tab, unsigned int i)
{
	unsigned int j;

	j = 0;
	while (j < i)
	{
		free(tab[j]);
		j++;
	}
	free(tab);	
}
