/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   h_atoi.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   hadrien.moulherat@etudiant.univ-rennes1.fr     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 22:31:27 by hadrien           #+#    #+#             */
/*   Updated: 2023/12/27 20:00:13 by hadrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	h_atoi(const char *nptr)
{
	long long int	value;
	int				negative;

	value = 0;
	negative = 1;
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == 32)
		nptr++;
	if (*nptr == '+')
	{
		nptr++;
		if (!h_isdigit(*nptr))
			return (0);
	}
	if (*nptr == '-')
	{
		nptr++;
		negative = -1;
	}
	while (h_isdigit(*nptr))
	{
		value = value * 10 + (*nptr - 48);
		nptr++;
	}
	return (value * negative);
}
