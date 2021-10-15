/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegadri <adegadri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 13:49:59 by adegadri          #+#    #+#             */
/*   Updated: 2021/10/12 15:37:35 by adegadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "mlx/mlx.h"
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <X11/X.h>
# include <X11/keysym.h>

# define ESC 65307
# define W 119
# define D 100
# define S 115
# define A 97

typedef struct s_coord
{
	int	count;
	int	x;
	int	y;
	int	x_player;
	int	y_player;
	int	x_m;
	int	y_m;
	int	x_hm;
	int	y_hm;
	int	x_h;
	int	y_h;
}	t_coord;

typedef struct s_enemy
{
	int	x_hm;
	int	y_hm;
	int	x_h;
	int	y_h;
}	t_enemy;

typedef struct s_win
{
	int	block;
	int	win_len;
	int	win_wid;
}	t_win;

typedef struct s_size
{
	int	len;
	int	wid;
}	t_size;

typedef struct s_collec
{
	int	collec;
}	t_collec;

typedef struct s_wall
{
	int	x_w;
	int	y_w;
}	t_wall;

typedef struct s_img
{
	void	*mlx_img;
	char	*addr;
	int		bpp;
	int		line_len;
	int		endian;
}	t_img;

typedef struct s_vars
{
	void		*mlx;
	void		*win;
	char		**maps;
	t_img		img;
	t_img		sand;
	t_img		stone;
	t_img		itchigo;
	t_img		doors;
	t_img		soul;
	t_img		hollow;
	t_coord		coord;
	t_wall		wall;
	t_size		size;
	t_win		size_win;
	t_collec	collec;
	t_enemy		enemy;
}				t_vars;

int		ft_strlen(char *str);
int		ft_strlen2(char *str);
void	is_neg(int n, char *s);
void	count(unsigned int *len, int tmp);
char	*ft_itoa(int n);
void	swap_coord(t_vars *vars);
void	p_in_map(t_vars *vars);
int		ft_free(t_vars *vars);
void	ft_free2(char **tab);
int		ft_size_of_map(char *name_map);
char	*ft_get_map(char *name_map);
char	**ft_split(char const *s, char c);
void    init_size_window(t_vars *vars);
void	init_coord_enemy(t_vars *vars);
void	enemy(t_vars *vars);
void	put_enemy(t_vars *vars);
void	enemy_move(t_vars *vars);
void	enemy_texture(t_vars *vars);
void	ft_xpm_to_image(t_vars *vars);
int		check_number_line(char **map, t_vars *vars);
int		check_letter(char *str);
int		check_letter_map(char **map);
int		ft_check_name_map(char *s1);
int		ft_send_map(int ac, char **ag);
int		ft_if_map_is_closed(char **map, t_vars *vars);
int    check_map_all(t_vars *vars, char **map);
void	ft_char(char c, t_vars *vars);
void	ft_ligne(char *ligne, t_vars *vars);
void    build_map(t_vars *vars, char **map);
int		ft_count_words(const char *s, char c);
int		ft_sizeof_word(char const *str, char c);
void	ft_init_coords(t_vars *vars);
void	ft_init_coords(t_vars *vars);
void    esc(t_vars *vars);
void	go_w(t_vars *vars);
void	go_d(t_vars *vars);
void	go_s(t_vars *vars);
void	go_a(t_vars *vars);
void	ft_move_w_if_e(t_vars *vars);
void	ft_move_d_if_e(t_vars *vars);
void	ft_move_s_if_e(t_vars *vars);
void	ft_move_a_if_e(t_vars *vars);
int		ft_move(int keycode, t_vars *vars);
void	ft_move_w(t_vars *vars);
void	ft_move_d(t_vars *vars);
void	ft_move_s(t_vars *vars);
void	ft_move_a(t_vars *vars);
void	put_count_to_window(t_vars *vars);

#endif
