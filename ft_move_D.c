/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_D.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegadri <adegadri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 16:31:08 by adegadri          #+#    #+#             */
/*   Updated: 2021/10/11 18:13:26 by adegadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_move_d(t_vars *vars)
{
	if (vars->maps[vars->coord.y_player][vars->coord.x_player + 1] != '1')
	{
		put_count_to_window(vars);
		if (vars->maps[vars->coord.y_player][vars->coord.x_player + 1] != 'E')
		{
			mlx_put_image_to_window(vars->mlx, vars->win, vars->sand.mlx_img, \
			vars->coord.x, vars->coord.y);
			go_d(vars);
			vars->coord.count += 1;
			mlx_put_image_to_window(vars->mlx, vars->win, \
			vars->itchigo.mlx_img, vars->coord.x, vars->coord.y);
		}
		ft_move_d_if_e(vars);
		if (vars->maps[vars->coord.y_player][vars->coord.x_player] == 'C')
			vars->collec.collec -= 1;
		if (vars->maps[vars->coord.y_player][vars->coord.x_player] == 'H')
			enemy(vars);
	}
}
