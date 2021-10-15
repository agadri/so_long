# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adegadri <adegadri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/02 04:20:35 by adegadri          #+#    #+#              #
#    Updated: 2021/10/11 22:18:25 by adegadri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

SRCS = 	check_map.c \
	check_map_all.c \
	build_map.c \
	enemy_bonus.c \
	ft_init_coords.c \
	init_size_window.c\
	ft_itoa.c \
	ESC.c \
	ft_move_A.c \
	ft_move_A_E.c \
	ft_move_D.c \
	ft_move_D_E.c \
	ft_move_S.c \
	ft_move_S_E.c \
	ft_move_W.c \
	ft_move_W_E.c \
	ft_split.c \
	get_file.c \
	go_A.c \
	go_D.c \
	go_S.c \
	go_W.c \
	move.c \
	move_to_window_bonus.c \
	tableau.c \
	utils.c

OBJS         =     ${SRCS:.c=.o}

PATH_MLX    =    ./mlx
CC             =     gcc
CFLAGS        =     -Wall -Wextra -Werror
LIB         =   mlx/libmlx_Linux.a
RM            =     rm -f
NAME        =     so_long
FLAGS        =     -ldl -Imlx -Lmlx -lmlx -lm -lXext -lX11 

all:             ${NAME}

.c.o:
	${CC} ${CFLAGS} -Imlx -Ibass -c $< -o ${<:.c=.o}

$(NAME):         $(OBJS)
	make -C $(PATH_MLX)
	${CC} $(CFLAGS) $(OBJS) $(FLAGS) $(LIB) -o $(NAME) -g -g3

clean:
	make -C $(PATH_MLX) clean
	${RM} ${OBJS} 

fclean:         clean
	${RM} ${NAME} 

re:             fclean all

.SILENT:        $(NAME)

.PHONY:            bonus all clean fclean re
	#OBJS = $(SRCS:.c=.o)

