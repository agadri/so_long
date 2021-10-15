/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map_all.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegadri <adegadri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:53:31 by adegadri          #+#    #+#             */
/*   Updated: 2021/10/12 15:42:19 by adegadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_map_all(t_vars *vars, char **map)
{
	if (!map)
	{
		map = NULL;
		return (0);
	}
	if (check_number_line(map, vars) == 0 || check_letter_map(map) == 0 || \
	ft_if_map_is_closed(map, vars) == 0)
	{
		printf("%s\n", "ERROR OF MAP");
		return (0);
	}
	return (1);
}
