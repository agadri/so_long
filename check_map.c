/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegadri <adegadri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 16:31:00 by adegadri          #+#    #+#             */
/*   Updated: 2021/10/11 17:36:38 by adegadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_number_line(char **map, t_vars *vars)
{
	int	i;
	int	len1;
	int	len2;

	i = 0;
	if (!map)
		return (0);
	len1 = ft_strlen(map[i]);
	vars->size.len = len1 - 1;
	while (map[++i])
	{
		len2 = ft_strlen(map[i]);
		if (len1 != len2)
		{
			return (0);
		}
	}
	vars->size.wid = i - 1;
	return (1);
}

int	check_letter(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] != '0' && str[i] != '1' \
		&& str[i] != 'C' && str[i] != 'E' && str[i] != 'P' && str[i] != 'H')
			return (0);
		i++;
	}
	return (1);
}

int	check_letter_map(char **map)
{
	int	i;
	int	ret;

	i = 0;
	while (map[i])
	{
		ret = check_letter(map[i]);
		if (ret == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_name_map(char *s1)
{
	int		i;
	char	*s2;

	i = ft_strlen(s1) - 4;
	s2 = ".ber";
	while (s1[i])
	{	
		if (s1[i] != *s2++)
			return (0);
		i++;
	}
	return (1);
}

int	ft_if_map_is_closed(char **map, t_vars *vars)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (map[0][j] && map[vars->size.wid][j])
	{
		if (map[0][i] != '1' || map[vars->size.wid][j] != '1')
			return (0);
		i++;
		j++;
	}
	i = 0;
	j = 0;
	while (i <= vars->size.wid)
	{
		if ((map[i][0] != '1' || map[i][vars->size.len] != '1') \
		&& i <= vars->size.wid)
			return (0);
		i++;
	}
	return (1);
}
