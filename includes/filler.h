#ifndef FILLER_H

# define FILLER_H

# include "libft.h"

typedef struct	s_filler
{
	char		player_symbol;
	char		enemy_symbol;
	t_plateau	*plateau;
	t_piece		*piece;
	int			y;
	int			x;
}				t_filler;

#endif