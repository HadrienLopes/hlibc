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

char	*h_strcat(char *dest, const char *src)
{
	int i;
	int dest_len;

	i = -1;
	dest_len = ft_strlen(dest);
	while (src[++i])
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
