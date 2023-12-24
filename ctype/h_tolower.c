/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   h_tolower.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   hadrien.moulherat@etudiant.univ-rennes1.fr     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 11:26:13 by hadrien           #+#    #+#             */
/*   Updated: 2023/12/24 19:01:12 by hadrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <h_ctype.h>

int	h_tolower(int c)
{
	return ((ISFUNC((unsigned char)c, ISLOWER)) ?
		(unsigned char)c | 0x20 : c);
}
