/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   h_qsort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   hadrien.moulherat@etudiant.univ-rennes1.fr     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 20:16:40 by hadrien           #+#    #+#             */
/*   Updated: 2023/12/27 20:16:42 by hadrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>
#include <stdlib.h>
#include <h_stdlib.h>

void h_qsort(int *tab_p, int first, int last);

void
h_qsort(void *base, size_t nmemb, size_t size,
	int (*compar)(const void *, const void *))
{
	void *i;
	void *j;
	void *tmp;
	void *pivot;

	i = base;
	j = base;
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
			if (compar((void*)(base + (i * size)), base + ) > 0)
			{
				tmp = tab_p[i];
				tab_p[i] = tab_p[j];
				tab_p[j] = tmp;
				j++;
			}
			i++;
		}
		h_qsort(base, first, j - 1);
		h_qsort(base, j, last);
	}
}
