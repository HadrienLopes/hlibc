/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   h_strstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   hadrien.moulherat@etudiant.univ-rennes1.fr     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 21:17:58 by hadrien           #+#    #+#             */
/*   Updated: 2023/12/17 21:17:58 by hadrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <h_string.h>
#include <stddef.h>

char	*h_strstr(char *haystack, const char *needle)
{
	size_t i;
	size_t j;
	size_t k;
	size_t needle_len;

	i = 0;
	j = 0;
	k = 0;
	needle_len = h_strlen(needle);
	if (!(needle_len))
		return ((char*)haystack);
	while (haystack[i])
	{
		while (haystack[k++] == needle[j++])
			if (j == needle_len)
				return ((char*)&haystack[k - needle_len]);
		if (j > 0)
		{
			j = 0;
			k = i;
		}
		i++;
		k++;
	}
	return (NULL);
}
