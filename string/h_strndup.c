/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   h_strndup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   hadrien.moulherat@etudiant.univ-rennes1.fr     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 21:17:58 by hadrien           #+#    #+#             */
/*   Updated: 2023/12/17 21:17:58 by hadrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*h_strndup(const char *s, int n)
{
	int		i;
	char	*str;

	i = -1;
	if (!(str = (char*)malloc(sizeof(char) * (n + 1))))
		return (0);
	while (s[++i] && n > 0)
	{
		str[i] = s[i];
		n--;
	}
	str[i] = '\0';
	return (str);
}
