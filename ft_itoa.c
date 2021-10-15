/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegadri <adegadri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 15:36:09 by adegadri          #+#    #+#             */
/*   Updated: 2021/10/11 22:25:02 by adegadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	is_neg(int n, char *s)
{
	n *= -1;
	*s++ = '-';
}

void	count(unsigned int *len, int tmp)
{
	tmp /= 10;
	while (tmp)
	{
		tmp /= 10;
		len[0]++;
		len[1] *= 10;
	}
}

char	*ft_itoa(int n)
{
	unsigned int	len[2];
	int				tmp;
	char			*s;

	tmp = n;
	len[0] = 1;
	len[1] = 1;
	if (n < 0)
		++len[0];
	count(len, tmp);
	s = (char *)malloc(sizeof(char) * len[0] + 1);
	if (!s)
		return (NULL);
	is_neg(n, s);
	while (len[1])
	{
		*s++ = ('0' + (n / len[1]) % 10 );
		len[1] /= 10;
	}
	*s = '\0';
	return (s - len[0]);
}
