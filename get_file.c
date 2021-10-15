/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_file.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegadri <adegadri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 16:31:30 by adegadri          #+#    #+#             */
/*   Updated: 2021/10/11 22:35:53 by adegadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_size_of_map(char *name_map)
{
	char	buffer[1];
	int		count;
	int		rd;
	int		fd;

	rd = 1;
	count = 0;
	fd = open(name_map, O_RDONLY);
	if (fd == -1)
		return (-1);
	while (rd)
	{
		rd = read(fd, buffer, 1);
		count++;
	}
	if (close(fd) == -1)
		return (-1);
	return (count);
}

char	*ft_get_map(char *name_map)
{
	char	*map;
	int		rd;
	int		size;
	int		fd;

	fd = open(name_map, O_RDONLY);
	if (fd == -1)
		return (NULL);
	size = ft_size_of_map(name_map);
	rd = 1;
	map = (char *)malloc(sizeof(char) * (size + 1));
	if (!map)
		return (NULL);
	rd = read(fd, map, size);
	map[rd] = '\0';
	if (close(fd) == -1)
		return (NULL);
	return (map);
}
