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

void	*h_memset(void *s, int c, size_t n); //WIP

#endif /* H_STRING_H_ */ 
