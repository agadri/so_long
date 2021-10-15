/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_A_E.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegadri <adegadri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:22:36 by adegadri          #+#    #+#             */
/*   Updated: 2021/10/11 22:38:42 by adegadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_move_a_if_e(t_vars *vars)
{
	if (vars->maps[vars->coord.y_player][vars->coord.x_player - 1] == 'E')
	{
		if (vars->collec.collec <= 0)
		{
			printf("%s\n", "END OF GAME\n");
			esc(vars);
		}
	}
}
