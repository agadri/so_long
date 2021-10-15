/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ESC.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegadri <adegadri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 19:20:26 by adegadri          #+#    #+#             */
/*   Updated: 2021/10/12 15:43:51 by adegadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	esc(t_vars *vars)
{
	mlx_destroy_image(vars->mlx, vars->sand.mlx_img);
	mlx_destroy_image(vars->mlx, vars->stone.mlx_img);
	mlx_destroy_image(vars->mlx, vars->itchigo.mlx_img);
	mlx_destroy_image(vars->mlx, vars->doors.mlx_img);
	mlx_destroy_image(vars->mlx, vars->soul.mlx_img);
	mlx_destroy_image(vars->mlx, vars->hollow.mlx_img);
	mlx_destroy_window(vars->mlx, vars->win);
	exit(0);
}
