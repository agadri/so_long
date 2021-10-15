/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_size_window.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegadri <adegadri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:22:00 by adegadri          #+#    #+#             */
/*   Updated: 2021/10/11 22:32:15 by adegadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_xpm_to_image(t_vars *vars)
{
	int		img_width;
	int		img_height;

	vars->itchigo.mlx_img = mlx_xpm_file_to_image(vars->mlx, \
	"texture/itchigo.xpm", &img_width, &img_height);
	vars->sand.mlx_img = mlx_xpm_file_to_image(vars->mlx, "texture/sand.xpm", \
	&img_width, &img_height);
	vars->stone.mlx_img = mlx_xpm_file_to_image(vars->mlx, "texture/stone.xpm", \
	&img_width, &img_height);
	vars->doors.mlx_img = mlx_xpm_file_to_image(vars->mlx, "texture/doors.xpm", \
	&img_width, &img_height);
	vars->soul.mlx_img = mlx_xpm_file_to_image(vars->mlx, "texture/soul.xpm", \
	&img_width, &img_height);
	vars->hollow.mlx_img = mlx_xpm_file_to_image(vars->mlx, \
	"texture/enemy.xpm", &img_width, &img_height);
}

void	init_size_window(t_vars *vars)
{
	vars->size_win.win_wid = ((vars->size.wid + 1) * 64);
	vars->size_win.win_len = ((vars->size.len + 1) * 64);
	ft_xpm_to_image(vars);
	vars->win = mlx_new_window(vars->mlx, vars->size_win.win_len, \
	vars->size_win.win_wid, "so_long");
}
