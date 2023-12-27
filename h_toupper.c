/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   h_toupper.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   hadrien.moulherat@etudiant.univ-rennes1.fr     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 11:26:13 by hadrien           #+#    #+#             */
/*   Updated: 2023/12/24 19:01:01 by hadrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	h_toupper(int c)
{
	return ((ISFUNC((unsigned char)c, ISUPPER)) ?
		(unsigned char)c & 0xDF : c);
}
