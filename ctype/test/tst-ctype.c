/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst-ctype.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   hadrien.moulherat@etudiant.univ-rennes1.fr     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 12:33:01 by hadrien           #+#    #+#             */
/*   Updated: 2023/12/24 18:50:58 by hadrien          ###   ########.fr       */
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
//#define AX_ISCNTRL(c) (c >= 0 && c <= '31')
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

#define CMP_ISFUNC(func1, func2, c) ((!!func1(c)) != (!!func2(c)))

int main(void)
{
	unsigned char	c;
	unsigned int	err;

	err = 0;
	/* We only test for the interval [0; UCHAR_MAX]
	   because the parameter c is everytime casted into unsigned char. */
	for (c = 0; c < UCHAR_MAX; c++)
	{
		if ((CMP_ISFUNC(h_isalnum, AX_ISALNUM, (int)c))
			&& (CMP_ISFUNC(h_isalnum, isalnum, (int)c)))
		{
			printf("h_isalnum: %d\n", (int)c);
			err++;
		}
		if ((CMP_ISFUNC(h_isalpha, AX_ISALPHA, (int)c))
			&& (CMP_ISFUNC(h_isalpha, isalpha, (int)c)))
		{
			printf("h_isalpha: %d\n", (int)c);
			err++;
		}
		if ((CMP_ISFUNC(h_isblank, AX_ISBLANK, (int)c))
			&& (CMP_ISFUNC(h_isblank, isblank, (int)c)))
		{
			printf("h_isblank: %d\n", (int)c);
			err++;
		}
		if (CMP_ISFUNC(h_iscntrl, iscntrl, (int)c))
		{
			printf("h_iscntrl: %d\n", (int)c);
			err++;
		}
		if ((CMP_ISFUNC(h_isdigit, AX_ISDIGIT, (int)c))
			&& (CMP_ISFUNC(h_isdigit, isdigit, (int)c)))
		{
			printf("h_isdigit: %d\n", (int)c);
			err++;
		}
		if ((CMP_ISFUNC(h_isgraph, AX_ISGRAPH, (int)c))
			&& (CMP_ISFUNC(h_isgraph, isgraph, (int)c)))
		{
			printf("h_isgraph: %d\n", (int)c);
			err++;
		}
		if ((CMP_ISFUNC(h_islower, AX_ISLOWER, (int)c))
			&& (CMP_ISFUNC(h_islower, islower, (int)c)))
		{
			printf("h_islower: %d\n", (int)c);
			err++;
		}
		if ((CMP_ISFUNC(h_isprint, AX_ISPRINT, (int)c))
			&& (CMP_ISFUNC(h_isprint, isprint, (int)c)))
		{
			printf("h_isprint: %d\n", (int)c);
			err++;
		}
		if ((CMP_ISFUNC(h_ispunct, AX_ISPUNCT, (int)c))
			&& (CMP_ISFUNC(h_ispunct, ispunct, (int)c)))
		{
			printf("h_ispunct: %d\n", (int)c);
			err++;
		}
		if ((CMP_ISFUNC(h_isspace, AX_ISSPACE, (int)c))
			&& (CMP_ISFUNC(h_isspace, isspace, (int)c)))
		{
			printf("h_isspace: %d\n", (int)c);
			err++;
		}
		if ((CMP_ISFUNC(h_isupper, AX_ISUPPER, (int)c))
			&& (CMP_ISFUNC(h_isupper, isupper, (int)c)))
		{
			printf("h_isupper: %d\n", (int)c);
			err++;
		}
		if ((CMP_ISFUNC(h_isxdigit, AX_ISXDGIT, (int)c))
			&& (CMP_ISFUNC(h_isxdigit, isxdigit, (int)c)))
		{
			printf("h_isxdigit: %d\n", (int)c);
			err++;
		}
	}
	printf("final error(s): %d\n", err);
	return (err ? EXIT_FAILURE : EXIT_SUCCESS);
}
