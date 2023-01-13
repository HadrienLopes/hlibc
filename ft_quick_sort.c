#include "libft.h"

int *ft_quick_sort(int *tab_p, int first, int last)
{
	int pivot;
	int i;
	int j;
	int tmp;

	i = first;
	j = first;
	srand(time(NULL));
	if (first < last)
	{
		pivot = first + rand() % (last - first);
		tmp = tab_p[pivot];
		tab_p[pivot] = tab_p[last - 1];
		tab_p[last - 1] = tmp;
		while (i < last)
		{
			if (tab_p[i] <= tab_p[last - 1])
			{
				tmp = tab_p[i];
				tab_p[i] = tab_p[j];
				tab_p[j] = tmp;
				j++;
			}
			i++;
		}
		ft_quick_sort(tab_p, first, j - 1);
		ft_quick_sort(tab_p, j, last);
	}
	return (tab_p);
}