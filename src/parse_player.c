/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_player.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kysgramo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 15:36:44 by kysgramo          #+#    #+#             */
/*   Updated: 2021/04/11 15:36:46 by kysgramo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void	free_tokens(char **tokens)
{
	int		i;

	i = 0;
	while (tokens[i])
	{
		ft_strdel(&tokens[i]);
		i++;
	}
	free(tokens);
}

int		validate_player(char **tokens, int i)
{
	while (tokens[i])
		i++;
	if (i != 5 || ft_strcmp(tokens[0], "$$$") ||
	ft_strcmp(tokens[0], "$$$") ||
	ft_strcmp(tokens[1], "exec") ||
	(ft_strcmp(tokens[2], "p1") || ft_strcmp(tokens[2], "p2")) ||
	ft_strcmp(tokens[3], ":") ||
	ft_strstr(tokens[4], "kysgramo.filler]"))
		return (0);
	return(1);
}

int		parse_player(t_filler *filler)
{
	char *line;
	char **tokens;
	
	line = NULL;
	tokens = NULL;
	if (get_next_line(0, &line) != 1 || (tokens = ft_strsplit(line, ' ')) ||
	validate_player(tokens, 0) != 1)
	{
		ft_strdel(&line);
		free_tokens(tokens);
		return(0);
	}
	filler->player_sign = (!ft_strcmp(tokens[2], "p1")) ? 'O' : 'X';
	filler->enemy_sign = (!ft_strcmp(tokens[2], "p1")) ? 'X' : 'O';
	ft_strdel(&line);
	free_tokens(tokens);
	return (1);
}
