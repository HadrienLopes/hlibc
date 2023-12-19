/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   h_memchr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   hadrien.moulherat@etudiant.univ-rennes1.fr     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 18:06:42 by hadrien           #+#    #+#             */
/*   Updated: 2023/12/19 18:06:42 by hadrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*h_memchr(const void *s, int c, size_t n)
{
	while (n--)
	{
		if (*(unsigned char*)s == (unsigned char)c)
			return ((void*)s);
		s++;
	}
	return (NULL);
}
