/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst-ctype.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   hadrien.moulherat@etudiant.univ-rennes1.fr     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 12:33:01 by hadrien           #+#    #+#             */
/*   Updated: 2023/12/25 21:16:25 by hadrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <h_ctype.h>
#include <ctype.h>
#include <limits.h>
#include <stdlib.h>
#include <stdio.h>

/* Defined ctype axioms. */
#define AX_ISALNUM(c) (AX_ISALPHA(c) || AX_ISDIGIT(c))
#define AX_ISALPHA(c) (AX_ISUPPER(c) || AX_ISLOWER(c))
#define AX_ISBLANK(c) (c == ' ' || c == '\t')
#define AX_ISCNTRL(c) (c >= 0 && c <= '31')
#define AX_ISDIGIT(c) (c >= '0' && c <= '9')
#define AX_ISGRAPH(c) ((c >= 33 && c <= 126) && c != ' ')
#define AX_ISLOWER(c) (c >= 'a' && c <= 'z')
#define AX_ISPRINT(c) (c >= 32 && c <= 126)
#define AX_ISPUNCT(c) (AX_ISPRINT(c) && !(AX_ISSPACE(c) || (AX_ISALNUM(c))))
#define AX_ISSPACE(c) (c == ' ' || c == '\f' || c == '\n' \
			|| c == 'r' || c == 't' || c == 'v')
#define AX_ISUPPER(c) (c >= 'A' && c <= 'Z')
#define AX_ISXDGIT(c) ((c >= '0' && c <= '9') \
			|| (c >= 'a' && c <= 'f') \
			|| (c >= 'A' && c <= 'F'))
#define AX_TOLOWER 1
#define AX_TOUPPER 1

#define CMP_ISFUNC(func1, func2, c) ((!!func1(c)) != (!!func2(c)))

/* We only test for the interval [0; UCHAR_MAX]
because the parameter c is everytime casted into unsigned char. */
#define TEST_ISFUNC(func, axiom) printf("h_"#func":\t"); \
	for (c = 0; c < UCHAR_MAX; c++) \
	{ \
		if ((CMP_ISFUNC(h_##func, AX_ISALNUM, (int)c)) \
			&& (CMP_ISFUNC(h_##func, func, (int)c))) \
			err++; \
		if (c % 8 == 0) \
		{ \
			if (err) \
				printf("\e[91m ✗\e[0m"); \
			else \
				printf("\e[32m ✓\e[0m"); \
			err = 0; \
		} \
	} \
	printf("\n");

int main(void)
{
	unsigned char	c;
	unsigned int	err;

	err = 0;
	TEST_ISFUNC(isalnum, AX_ISALNUM);
	TEST_ISFUNC(isalpha, AX_ISALPHA);
	TEST_ISFUNC(isblank, AX_ISBLANK);
	TEST_ISFUNC(iscntrl, AX_ISCNTRL);
	TEST_ISFUNC(isdigit, AX_ISDIGIT);
	TEST_ISFUNC(isgraph, AX_ISGRAPH);
	TEST_ISFUNC(islower, AX_ISLOWER);
	TEST_ISFUNC(isprint, AX_ISPRINT);
	TEST_ISFUNC(ispunct, AX_ISPUNCT);
	TEST_ISFUNC(isspace, AX_ISSPACE);
	TEST_ISFUNC(isupper, AX_ISUPPER);
	TEST_ISFUNC(isxdigit, AX_ISXDGIT);

	TEST_ISFUNC(tolower, AX_TOLOWER);
	TEST_ISFUNC(toupper, AX_TOUPPER);
	return (0);
}
