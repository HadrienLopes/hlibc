/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   h_toupper.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   hadrien.moulherat@etudiant.univ-rennes1.fr     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 11:26:13 by hadrien           #+#    #+#             */
/*   Updated: 2023/12/24 18:50:03 by hadrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	h_toupper(int c)
{
	return ((ISFUNC((unsigned char)c, ISUPPER(c))) ?
		(unsigned char)c & 0xDF : c);
}
