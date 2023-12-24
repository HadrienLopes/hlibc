/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   h_isspace.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   hadrien.moulherat@etudiant.univ-rennes1.fr     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 17:52:45 by hadrien           #+#    #+#             */
/*   Updated: 2023/12/24 17:58:15 by hadrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <h_ctype.h>

int	h_isspace(int c)
{
	return (ISFUNC((unsigned char)c, ISSPACE));
}
