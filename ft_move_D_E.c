/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_D_E.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegadri <adegadri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:04:17 by adegadri          #+#    #+#             */
/*   Updated: 2021/10/11 22:38:50 by adegadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_move_d_if_e(t_vars *vars)
{
	if (vars->maps[vars->coord.y_player][vars->coord.x_player + 1] == 'E' )
	{
		if (vars->collec.collec <= 0)
		{
			printf("END OF GAME\n");
			esc(vars);
		}
	}
}
