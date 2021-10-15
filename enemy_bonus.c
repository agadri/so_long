/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enemy_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegadri <adegadri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 19:49:20 by adegadri          #+#    #+#             */
/*   Updated: 2021/10/12 15:36:38 by adegadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	init_coord_enemy(t_vars *vars)
{
	vars->enemy.x_h = vars->coord.x_m;
	vars->enemy.y_h = vars->coord.y_m;
	vars->enemy.x_hm = vars->coord.x_m / 64;
	vars->enemy.y_hm = vars->coord.y_m / 64;
}

void	put_enemy(t_vars *vars)
{
	mlx_put_image_to_window(vars->mlx, vars->win, vars->hollow.mlx_img, \
	vars->coord.x_m, vars->coord.y_m);
	init_coord_enemy(vars);
}

void	enemy_move(t_vars *vars)
{
	int	i;

	i = 0;
	if (i == 0 && (vars->maps[vars->enemy.y_hm + 1][vars->enemy.x_hm] != '1'))
	{
		mlx_put_image_to_window(vars->mlx, vars->win, vars->sand.mlx_img, \
		vars->enemy.x_h, vars->enemy.y_h);
		vars->enemy.y_h += 64;
		vars->enemy.y_hm += 1;
		swap_coord(vars);
		mlx_put_image_to_window(vars->mlx, vars->win, \
		vars->hollow.mlx_img, vars->enemy.x_h, vars->enemy.y_h);
		i = 1;
	}
	if (i == 1 && (vars->maps[vars->enemy.y_hm - 1][vars->enemy.x_hm] != '1'))
	{
		mlx_put_image_to_window(vars->mlx, vars->win, vars->sand.mlx_img, \
		vars->enemy.x_h, vars->enemy.y_h);
		vars->enemy.y_h -= 64;
		vars->enemy.y_hm -= 1;
		swap_coord(vars);
		mlx_put_image_to_window(vars->mlx, vars->win, \
		vars->hollow.mlx_img, vars->enemy.x_h, vars->enemy.y_h);
		i = 0;
	}
}

void	enemy(t_vars *vars)
{
	printf("YOU LOST\n");
	mlx_destroy_window(vars->mlx, vars->win);
}
