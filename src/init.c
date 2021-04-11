/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kysgramo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 15:03:45 by kysgramo          #+#    #+#             */
/*   Updated: 2021/04/11 15:03:48 by kysgramo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

t_filler	*init_filler()
{
	t_filler	*filler;

	if ((filler = (t_filler *)ft_memalloc(sizeof(t_filler))))
	{
		filler->player_sign = 0;
		filler->enemy_sign = 0;
		filler->plateau = NULL;
		filler->piece = NULL;
		filler->y = 0;
		filler->x = 0; 
	}
	return(filler);
}

t_piece	*init_piece()
{
	t_piece	*piece;

	if ((piece = (t_piece *)ft_memalloc(sizeof(t_piece))))
	{
		piece->height = 0;
		piece->width = 0;
		piece->map = NULL;
	}
	return(piece);
}

t_plateau	*init_plateau()
{
	t_plateau	*plateau;

	if ((plateau = (t_plateau *)ft_memalloc(sizeof(t_plateau))))
	{
		plateau->height = 0;
		plateau->width = 0;
		plateau->plateau_map = NULL;
	}
	return(plateau);
}