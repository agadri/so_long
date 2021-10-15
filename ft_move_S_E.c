/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_S_E.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegadri <adegadri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:16:29 by adegadri          #+#    #+#             */
/*   Updated: 2021/10/11 22:38:56 by adegadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_move_s_if_e(t_vars *vars)
{
	if (vars->maps[vars->coord.y_player + 1][vars->coord.x_player] == 'E')
	{
		if (vars->collec.collec <= 0)
		{
			printf("END OF GAME\n");
			esc(vars);
		}
	}
}
