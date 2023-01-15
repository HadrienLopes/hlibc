/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 10:35:58 by hmoulher          #+#    #+#             */
/*   Updated: 2018/11/14 10:55:31 by hmoulher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define QUADMASK80 0x8080808080808080
#define QUADMASK01 0x0101010101010101

size_t	ft_strlen(const char *s)
{
	size_t i;
	char *str;
	long long int quadword;	
	long long int *quadword_p;

	i = 0;
	quadword_p = (long long int*)s;
	quadword = *quadword_p;
	while (!((quadword - QUADMASK01) & ~quadword & QUADMASK80))
	{
		quadword_p++;
		quadword = *quadword_p;
	}
	str = (char*)quadword_p;
	while (str[i] != 0)
		i++;
	return (str - s + i);
}
