/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst-ctype.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   hadrien.moulherat@etudiant.univ-rennes1.fr     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 12:33:01 by hadrien           #+#    #+#             */
/*   Updated: 2023/12/17 21:11:22 by hadrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <h_ctype.h>
#include <h_limits.h>
#include <h_stdlib.h>

/* Defined ctype axioms. */
#define ISUPPER(c) (c >= 'A' && c <= 'Z')
#define ISLOWER(c) (c >= 'a' && c <= 'z')
#define ISALPHA(c) (ISUPPER(c) || ISLOWER(c))

int main(int argc, char *argv[])
{
	unsigned char	c;
	unsigned int	err;

	err = 0;
	/* We only test for the interval [0; UCHAR_MAX]
	   because the parameter c is everytime casted into unsigned char. */
	for (c = 0; c < UCHAR_MAX; i++)
	{
		if (h_isalpha(c) != ISALPHA(c))
		{
			print_error("h_isalpha", c);
			err++;
		}
	}
	return (err ? EXIT_FAILURE : EXIT_SUCCESS);
}
