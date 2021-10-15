/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_S.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegadri <adegadri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 16:30:12 by adegadri          #+#    #+#             */
/*   Updated: 2021/10/11 18:13:09 by adegadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_move_s(t_vars *vars)
{
	if (vars->maps[vars->coord.y_player + 1][vars->coord.x_player] != '1')
	{
		put_count_to_window(vars);
		if (vars->maps[vars->coord.y_player + 1][vars->coord.x_player] != 'E')
		{
			mlx_put_image_to_window(vars->mlx, vars->win, vars->sand.mlx_img, \
			vars->coord.x, vars->coord.y);
			go_s(vars);
			vars->coord.count += 1;
			mlx_put_image_to_window(vars->mlx, vars->win, \
			vars->itchigo.mlx_img, vars->coord.x, vars->coord.y);
		}
		ft_move_s_if_e(vars);
		if (vars->maps[vars->coord.y_player][vars->coord.x_player] == 'C')
			vars->collec.collec -= 1;
		if (vars->maps[vars->coord.y_player][vars->coord.x_player] == 'H')
			enemy(vars);
	}
}
