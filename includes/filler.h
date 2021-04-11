#ifndef FILLER_H

# define FILLER_H

# include "libft.h"

/*
** Plateau

** height   — height of plateau
** width    — width of plateau
** plateau_map — map of plateau
*/

typedef struct	s_plateau
{
	int			height;
	int			width;
	int			**plateau_map;
}				t_plateau;

/*
** Piece
** height — height of piece
** width  — width of piece
** map    — map of piece
*/

typedef struct	s_piece
{
	int			height;
	int			width;
	char		**map;
}				t_piece;

/*
** Filler
** player_sign — player symbol ['O' or 'X']
** enemy_sign   — enemy symbol ['O' or 'X']
** plateau       — plateau information
** piece         — piece information
** y             — y coordinate on plateau
** x             — x coordinate on plateau
*/


typedef struct	s_filler
{
	char		player_sign;
	char		enemy_sign;
	t_plateau	*plateau;
	t_piece		*piece;
	int			y;
	int			x;
}				t_filler;

#endif