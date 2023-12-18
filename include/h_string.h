/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   h_string.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   hadrien.moulherat@etudiant.univ-rennes1.fr     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 21:18:01 by hadrien           #+#    #+#             */
/*   Updated: 2023/12/17 21:18:01 by hadrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_STRING_H_
# define H_STRING_H_

/* Biggest type possible for a single load/store instruction
	eg: movq instruction */
typedef	unsigned long long int	op_t;
#define OPSIZE sizeof(op_t)

typedef	unsigned long int	size_t;
typedef	unsigned char		byte;

char	*h_strcat(char * restrict s1, const char * restrict s2);
int		h_strcmp(const char *s1, const char *s2);
char	*h_strcpy(char * restrict s1, const char * restrict s2);
char	*h_strdup(const char *s);
size_t	h_strlen(const char *s);
char	*h_strncat(char * restrict s1, const char * restrict s2, size_t n);
char	*h_strncpy(char * restrict s1, const char * restrict s2, size_t n);
char	*h_strndup(const char *s, size_t size);
char	*h_strstr(char *s1, const char *s2);
void	*h_memset(void *s, int c, size_t n); //WIP

#endif /* H_STRING_H_ */ 