/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_to_window_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegadri <adegadri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:49:04 by adegadri          #+#    #+#             */
/*   Updated: 2021/10/11 21:44:06 by adegadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	put_count_to_window(t_vars *vars)
{
	char	*str;

	mlx_put_image_to_window(vars->mlx, vars->win, vars->stone.mlx_img, 0, 0);
	str = ft_itoa(vars->coord.count);
	printf("mouvement : %d\n", vars->coord.count);
	mlx_string_put(vars->mlx, vars->win, 50, 50, 0x0000FF00, str);
	free(str);
}
