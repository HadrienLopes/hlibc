/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   h_isgraph.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   hadrien.moulherat@etudiant.univ-rennes1.fr     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 17:49:30 by hadrien           #+#    #+#             */
/*   Updated: 2023/12/24 17:57:14 by hadrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <h_ctype.h>

int	h_isgraph(int c)
{
	return (ISFUNC((unsigned char)c, ISGRAPH));
}
