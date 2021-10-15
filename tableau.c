/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tableau.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegadri <adegadri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 16:30:45 by adegadri          #+#    #+#             */
/*   Updated: 2021/10/11 22:34:32 by adegadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **ag)
{
	t_vars	vars;
	char	*str;
	char	**map;

	vars.coord.count = 1;
	if (ac != 2)
		return (0);
	str = ft_get_map(ag[1]);
	map = ft_split(str, '\n');
	free(str);
	if (!check_map_all(&vars, map))
		ft_free2(map);
	vars.maps = map;
	vars.mlx = mlx_init();
	if (!vars.mlx)
		return (0);
	init_size_window(&vars);
	if (!vars.win)
		return (0);
	ft_free(&vars);
	ft_init_coords(&vars);
	build_map(&vars, vars.maps);
	mlx_key_hook(vars.win, ft_move, &vars);
	mlx_loop(vars.mlx);
	return (0);
}
