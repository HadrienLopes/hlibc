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

static char	**fill_it_well(char **str_mat, char *str)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			j = 0;
		else
		{
			j++;
			if (str[i + 1] == ' ' || str[i + 1] == '\t'
				|| str[i + 1] == '\n' || str[i + 1] == '\0')
			{
				if (!(str_mat[k] = (char*)malloc(sizeof(char) * (j + 1))))
				{
					free_str_mat(str_mat, k);
					return (NULL);
				}
				str_mat[k] = ft_strncpy(str_mat[k], (str + i - j + 1), j);
				k++;
			}
		}
		i++;
	}
	return (str_mat);
}

static int	count_str(char *str)
{
	int i;
	int count;
	int counted;

	i = 0;
	count = 0;
	counted = 0;
	while (str[i])
	{
		if (counted == 0)
		{
			count++;
			counted = 1;
		}
		else if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			counted = 0;
		i++;
	}
	return (count);
}

char		**ft_split(char *str)
{
	int		count;
	char	**str_mat;

	if (!(count = count_str(str)))
		return (NULL);
	if (!(str_mat = (char**)malloc(sizeof(char*) * (count + 1))))
		return (NULL);
	str_mat = fill_it_well(str_mat, str);
	str_mat[count] = NULL;
	return (str_mat);
}
