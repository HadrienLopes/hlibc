/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   hadrien.moulherat@etudiant.univ-rennes1.fr     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 19:40:48 by hadrien           #+#    #+#             */
/*   Updated: 2023/12/27 19:58:44 by hadrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# define ISALNUM 0x001
# define ISALPHA 0x002
# define ISBLANK 0x004
# define ISCNTRL 0x008
# define ISDIGIT 0x010
# define ISGRAPH 0x020
# define ISLOWER 0x040
# define ISPRINT 0x080
# define ISPUNCT 0x100
# define ISSPACE 0x200
# define ISUPPER 0x400
# define ISXDGIT 0x800

//table definition is in the file ftctype_table.c
extern short h_ctype_table[256];

# define ISFUNC(c, func) (h_ctype_table[c] & func)

int	h_isalnum(int c);
int	h_isalpha(int c);
int	h_isblank(int c);
int	h_iscntrl(int c);
int	h_isdigit(int c);
int	h_isgraph(int c);
int	h_islower(int c);
int	h_isprint(int c);
int	h_ispunct(int c);
int	h_isspace(int c);
int	h_isupper(int c);
int	h_isxdigit(int c);

int	h_tolower(int c);
int	h_toupper(int c);

int	atoi(const char *nptr);

typedef	unsigned long long int	op_t;
# define OPSIZE sizeof(op_t)

typedef	unsigned long int	size_t;
typedef	unsigned char		byte;

char	*h_strcat(char * restrict s1, const char * restrict s2);
int	h_strcmp(const char *s1, const char *s2);
char	*h_strcpy(char * restrict s1, const char * restrict s2);
char	*h_strdup(const char *s);
size_t	h_strlen(const char *s);
char	*h_strncat(char * restrict s1, const char * restrict s2, size_t n);
char	*h_strncpy(char * restrict s1, const char * restrict s2, size_t n);
char	*h_strndup(const char *s, size_t size);
char	*h_strstr(char *s1, const char *s2);
char	*h_strchr(char *s, int c);

void	*h_memccpy(void *dest, const void *src, int c, size_t n);
void	*h_memchr(const void *s, int c, size_t n);
int		h_memcmp(const void *s1, const void *s2, size_t n);
void	*h_memcpy(void *dest, const void *src, size_t n);
void	*h_memmove(void *dest, const void *src, size_t n);
void	*h_memset(void *s, int c, size_t n);

#endif /* LIBFT_H */
