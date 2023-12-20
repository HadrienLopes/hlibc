/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst-ctype.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   hadrien.moulherat@etudiant.univ-rennes1.fr     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 12:33:01 by hadrien           #+#    #+#             */
/*   Updated: 2023/12/20 18:46:05 by hadrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <h_ctype.h>
#include <limits.h>
#include <stdlib.h>
#include <stdio.h>

/* Defined ctype axioms. */
#define ISALNUM(c) (ISALPHA(c) || ISDIGIT(c))
#define ISUPPER(c) (c >= 'A' && c <= 'Z')
#define ISLOWER(c) (c >= 'a' && c <= 'z')
#define ISALPHA(c) (ISUPPER(c) || ISLOWER(c))
#define ISASCII(c) (c >= 0 && c <= 127)
#define ISDIGIT(c) (c >= '0' && c <= '9')

int main(int argc, char *argv[])
{
	unsigned char	c;
	unsigned int	err;

	err = 0;
	/* We only test for the interval [0; UCHAR_MAX]
	   because the parameter c is everytime casted into unsigned char. */
	for (c = 0; c < UCHAR_MAX; c++)
	{
		if (h_isalnum(c) != ISALNUM(c))
		{
			printf("h_isalpha: %d\n", (int)c);
			err++;
		}
		if (h_isalpha(c) != ISALPHA(c))
		{
			printf("h_isalpha: %d\n", (int)c);
			err++;
		}	
		if (h_isascii(c) != ISASCII(c))
		{
			printf("h_isascii: %d\n", (int)c);
			err++;
		}	
		
		if (h_isdigit(c) != ISDIGIT(c))
		{
			printf("h_isdigit: %d\n", (int)c);
			err++;
		}
		
	}
	printf("final errors: %d\n", err);
	return (err ? EXIT_FAILURE : EXIT_SUCCESS);
}
