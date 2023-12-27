/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   h_isxdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   hadrien.moulherat@etudiant.univ-rennes1.fr     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 17:58:37 by hadrien           #+#    #+#             */
/*   Updated: 2023/12/24 17:59:18 by hadrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	h_isxdigit(int c)
{
	return (ISFUNC((unsigned char)c, ISXDGIT));
}
