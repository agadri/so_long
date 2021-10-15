/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegadri <adegadri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:41:46 by adegadri          #+#    #+#             */
/*   Updated: 2021/10/12 15:36:59 by adegadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_char(char c, t_vars *vars)
{
	if (c == '0')
		mlx_put_image_to_window(vars->mlx, vars->win, vars->sand.mlx_img, \
		vars->coord.x_m, vars->coord.y_m);
	else if (c == '1')
		mlx_put_image_to_window(vars->mlx, vars->win, vars->stone.mlx_img, \
		vars->coord.x_m, vars->coord.y_m);
	else if (c == 'C')
	{
		mlx_put_image_to_window(vars->mlx, vars->win, vars->soul.mlx_img, \
		vars->coord.x_m, vars->coord.y_m);
		vars->collec.collec += 1;
	}
	else if (c == 'E')
		mlx_put_image_to_window(vars->mlx, vars->win, vars->doors.mlx_img, \
		vars->coord.x_m, vars->coord.y_m);
	else if (c == 'H')
		put_enemy(vars);
	else if (c == 'P')
	{
		mlx_put_image_to_window(vars->mlx, vars->win, vars->itchigo.mlx_img, \
		vars->coord.x_m, vars->coord.y_m);
		p_in_map(vars);
	}
}

void	ft_ligne(char *ligne, t_vars *vars)
{
	int	i;

	i = 0;
	if (!ligne[i])
		return ;
	while (ligne[i])
	{
		ft_char(ligne[i], vars);
		vars->coord.x_m += 64;
		i++;
	}
}

void	build_map(t_vars *vars, char **map)
{
	int	i;

	i = 0;
	vars->collec.collec = 0;
	while (map[i])
	{
		vars->coord.x_m = 0;
		ft_ligne(map[i++], vars);
		vars->coord.y_m += 64;
	}
}
