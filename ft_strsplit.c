#include "libft.h"

static void	free_str_mat(char **str_mat, int max)
{
	int i;

	i = 0;
	while (i < max)
	{
		free(str_mat[i]);
		i++;
	}
	free(str_mat);
}

static char	**fill_it_well(char **str_mat, char const *s, char c)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] == c)
			j = 0;
		else
		{
			j++;
			if (s[i + 1] == c || s[i + 1] == '\0')
			{
				if (!(str_mat[k] = (char*)malloc(sizeof(char) * (j + 1))))
				{
					free_str_mat(str_mat, k);
					return (NULL);
				}
				str_mat[k] = ft_strncpy(str_mat[k], (s + i - j + 1), j);
				k++;
			}
		}
		i++;
	}
	return (str_mat);
}

static int	count_str(char const *s, char c)
{
	int i;
	int count;
	int counted;

	i = 0;
	count = 0;
	counted = 0;
	while (s[i])
	{
		if (s[i] == c)
			counted = 0;
		else if (counted == 0)
		{
			count++;
			counted = 1;
		}
		i++;
	}
	return (count);
}

char			**ft_strsplit(char const *s, char c)
{
	int		count;
	char	**str_mat;

	if (!(count = count_str(s, c)))
		return (NULL);
	if (!(str_mat = (char**)malloc(sizeof(char*) * (count + 1))))
		return (NULL);
	str_mat = fill_it_well(str_mat, s, c);
	str_mat[count] = NULL;
	return (str_mat);
}
