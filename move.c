/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegadri <adegadri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 16:31:25 by adegadri          #+#    #+#             */
/*   Updated: 2021/10/12 15:45:14 by adegadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_move(int keycode, t_vars *vars)
{
	if (keycode == ESC)
		esc(vars);
	if (keycode == W)
		ft_move_w(vars);
	else if (keycode == D)
		ft_move_d(vars);
	else if (keycode == S)
		ft_move_s(vars);
	else if (keycode == A)
		ft_move_a(vars);
	return (0);
}
