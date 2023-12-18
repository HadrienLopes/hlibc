/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   h_strcat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   hadrien.moulherat@etudiant.univ-rennes1.fr     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 21:17:58 by hadrien           #+#    #+#             */
/*   Updated: 2023/12/17 21:17:58 by hadrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <h_string.h>

char	*h_strcat(char * restrict s1, const char * restrict s2)
{
	int i;
	int s1_len;

	i = -1;
	s1_len = h_strlen(s1);
	while (s2[++i])
		s1[s1_len + i] = s2[i];
	s1[s1_len + i] = '\0';
	return (s1);
}
