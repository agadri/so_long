/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegadri <adegadri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 16:30:38 by adegadri          #+#    #+#             */
/*   Updated: 2021/10/12 15:49:49 by adegadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

void	p_in_map(t_vars *vars)
{
	vars->coord.x = vars->coord.x_m;
	vars->coord.y = vars->coord.y_m;
	vars->coord.x_player = vars->coord.x_m / 64;
	vars->coord.y_player = vars->coord.y_m / 64;
}

void	swap_coord(t_vars *vars)
{
	char	tmp;

	tmp = vars->maps[vars->enemy.y_hm][vars->enemy.x_hm];
	vars->maps[vars->enemy.y_hm][vars->enemy.x_hm] = \
	vars->maps[vars->enemy.y_hm + 1][vars->enemy.x_hm];
	vars->maps[vars->enemy.y_hm + 1][vars->enemy.x_hm] = tmp;
}

int	ft_free(t_vars *vars)
{
	if (!vars->mlx || !vars->win)
	{
		free(vars->win);
		free(vars->mlx);
		return (0);
	}
	return (1);
}

void	ft_free2(char **tab)
{
	free(tab);
	exit(0);
}
