/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kysgramo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 15:03:34 by kysgramo          #+#    #+#             */
/*   Updated: 2021/04/11 15:03:39 by kysgramo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int		main(int ac, char **av)
{
	t_filler	*filler;

	if (!(filler = init_filler() ||
	parse_player(filler) != 1))
		return (0);
	return(1);
}
