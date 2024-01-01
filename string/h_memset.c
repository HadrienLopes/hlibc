/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   h_memset.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   hadrien.moulherat@etudiant.univ-rennes1.fr     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 18:25:01 by hadrien           #+#    #+#             */
/*   Updated: 2024/01/01 14:23:37 by hadrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <h_string.h>

void	*h_memset(void *s, int c, size_t n)
{
	op_t	xc;
	op_t	*sp;
	size_t	i;

	/* TODO check if not faster with SIMD instructions */
	xc = (unsigned char)c;
	xc |= (xc << 8);
	xc |= (xc << 16);
	if (OPSIZE == 8)
	{
		xc |= (xc << 16);
		xc |= (xc << 16);
	}

	/* The compiler must optimize this operation with a 
	   logical shift left operation */
	i = n / OPSIZE;
	sp = (op_t*)s;
	while (i)
	{
		*sp = xc;
		sp++;
		i--;
	}

	/* If n < 8 but it need an alignment check */
	if (n & 0x4)
	{
		*((int*)sp) = (int)xc;
		sp = (op_t*)(((int*)sp) + 1);
	}
	if (n & 0x2)
	{
		*((short*)sp) = (short)xc;
		sp = (op_t*)(((short*)sp) + 1);
	}
	if (n & 0x1)
		*((char*)sp) = (char)xc;
	return (s);
}
