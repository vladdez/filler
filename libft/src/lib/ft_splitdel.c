/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitdel.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fallard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 22:19:01 by fallard           #+#    #+#             */
/*   Updated: 2020/07/24 22:27:49 by fallard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_splitdel(char ***str)
{
	int i;

	i = 0;
	if (*str)
	{
		while ((*str)[i])
		{
			ft_memdel((void**)&(*str)[i]);
			i++;
		}
	}
	ft_memdel((void**)&(*str));
	return (1);
}
