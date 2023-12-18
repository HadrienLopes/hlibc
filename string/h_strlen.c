/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   h_strlen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   hadrien.moulherat@etudiant.univ-rennes1.fr     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 21:17:58 by hadrien           #+#    #+#             */
/*   Updated: 2023/12/17 21:17:58 by hadrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

#define QUADMASK80 0x8080808080808080
#define QUADMASK01 0x0101010101010101

size_t	h_strlen(const char *s)
{
	size_t i;
	const char *str;
	unsigned long long int quadword;	
	unsigned long long int *quadword_p;

	i = 0;
	quadword_p = (unsigned long long int*)s;
	quadword = *quadword_p;

	for (str = s; 
		((unsigned long long int)(str) & (sizeof(quadword) - 1)) != 0;
		str++)
	{
		if (*str == 0)
			return (str - s);
	}

	while (!((quadword - QUADMASK01) & ~quadword & QUADMASK80))
	{
		quadword_p++;
		quadword = *quadword_p;
	}
	str = (const char*)quadword_p;
	
	if ((((int)quadword - QUADMASK01) & ~(int)quadword & QUADMASK80))
	{
		int *int_p = (int*)quadword_p;
		int_p++;
		quadword_p = (unsigned long long int*)int_p;
		quadword = *quadword_p;
	}	
	if ((((short)quadword - QUADMASK01) & ~(short)quadword & QUADMASK80))
	{
		short *int_p = (short*)quadword_p;
		int_p++;
		quadword_p = (unsigned long long int*)int_p;
		quadword = *quadword_p;
	}
	if ((((char)quadword - QUADMASK01) & ~(char)quadword & QUADMASK80))
	{
		char *int_p = (char*)quadword_p;
		int_p++;
		quadword_p = (unsigned long long int*)int_p;
		quadword = *quadword_p;
	}
	while (str[i] != 0)
		i++;
	return (str - s + i);
}
