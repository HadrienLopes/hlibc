/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   h_memccpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   hadrien.moulherat@etudiant.univ-rennes1.fr     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 18:06:42 by hadrien           #+#    #+#             */
/*   Updated: 2023/12/19 18:06:42 by hadrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*h_memccpy(void *dest, const void *src, int c, size_t n)
{
	char		*dest_char;
	const char	*src_char;

	dest_char = (char*)dest;
	src_char = (const char*)src;
	while (n--)
	{
		*dest_char = *src_char;
		dest_char++;
		if (*src_char == (char)c)
			return ((void*)dest_char);
		src_char++;
	}
	return (NULL);
}
