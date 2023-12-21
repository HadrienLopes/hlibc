/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   h_string.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   hadrien.moulherat@etudiant.univ-rennes1.fr     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 21:18:01 by hadrien           #+#    #+#             */
/*   Updated: 2023/12/21 19:26:50 by hadrien          ###   ########.fr       */
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

void	*h_memccpy(void *dest, const void *src, int c, size_t n);
void	*h_memchr(const void *s, int c, size_t n);
int		h_memcmp(const void *s1, const void *s2, size_t n);
void	*h_memcpy(void *dest, const void *src, size_t n);
void	*h_memmove(void *dest, const void *src, size_t n);
void	*memset(void *s, int c, size_t n);

#endif /* H_STRING_H_ */ 
