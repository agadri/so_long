/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   go_A.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegadri <adegadri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 18:03:47 by adegadri          #+#    #+#             */
/*   Updated: 2021/10/05 17:00:22 by adegadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	go_a(t_vars *vars)
{
	vars->coord.x -= 64;
	vars->coord.x_player -= 1;
}
