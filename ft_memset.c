/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 10:34:13 by hmoulher          #+#    #+#             */
/*   Updated: 2018/11/14 10:43:21 by hmoulher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t i;
	unsigned long long int quadword;
	unsigned long long int *quadword_p;

	i = 0;
	quadword = 0;
	quadword = quadword | c;
	quadword = (quadword << 8) | quadword;
	quadword = (quadword << 16) | quadword;
	quadword = (quadword << 32) | quadword;
	quadword_p = (unsigned long long int*)str;
	while (i < (n / 8))
	{
		*quadword_p = quadword;
		quadword_p++;
		i++;
	}
	if (n & 0x4)
	{
		int *i_p = (int*)quadword_p;
		*i_p = (int)quadword;
		i_p++;
		quadword_p = (unsigned long long int*)i_p;
	}
	if (n & 0x2)
	{
		short *s_p = (short*)quadword_p;	
		*s_p = (short)quadword;
		s_p++;
		quadword_p = (unsigned long long int*)s_p;
	}
	if (n & 0x1)
	{
		char *c_p = (char*)quadword_p;
		*c_p = (char)quadword;
		c_p++;
		quadword_p = (unsigned long long int*)c_p;

	}
	return (str);	
}
