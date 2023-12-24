/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   h_ctype.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   hadrien.moulherat@etudiant.univ-rennes1.fr     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 16:18:33 by hadrien           #+#    #+#             */
/*   Updated: 2023/12/24 18:38:37 by hadrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_CTYPE_H
# define H_CTYPE_H

#define ISALNUM 0x001
#define ISALPHA 0x002
#define ISBLANK 0x004
#define ISCNTRL 0x008
#define ISDIGIT 0x010
#define ISGRAPH 0x020
#define ISLOWER 0x040
#define ISPRINT 0x080
#define ISPUNCT 0x100
#define ISSPACE 0x200
#define ISUPPER 0x400
#define ISXDGIT 0x800

//table definition is in the file h_ctype_table.c
extern short h_ctype_table[256];

#define ISFUNC(c, func) (h_ctype_table[c] & func)

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

#endif /* H_CTYPE_H */
