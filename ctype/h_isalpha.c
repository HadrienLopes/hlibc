/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   h_isalpha.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   hadrien.moulherat@etudiant.univ-rennes1.fr     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 11:26:13 by hadrien           #+#    #+#             */
/*   Updated: 2023/12/16 11:26:13 by hadrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	h_isalpha(int c)
{
	return (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) ? 1 : 0);
}