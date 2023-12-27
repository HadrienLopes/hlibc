/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   h_memcmp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   hadrien.moulherat@etudiant.univ-rennes1.fr     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 18:06:42 by hadrien           #+#    #+#             */
/*   Updated: 2023/12/19 18:06:42 by hadrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int		h_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *ucc_s1;
	const unsigned char *ucc_s2;

	ucc_s1 = s1;
	ucc_s2 = s2;
	while (n--)
	{
		if (*ucc_s1 != *ucc_s2)
			return (*ucc_s1 - *ucc_s2);
		ucc_s1++;
		ucc_s2++;
	}
	return (0);
}
