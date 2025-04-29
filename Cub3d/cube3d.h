#ifndef CUBE3D_H
# define CUBE3D_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include <fcntl.h>
#include "libft/libft.h"

typedef struct  s_vector
{
    int x;
    int y;
} t_vector;

typedef struct  s_map
{
    char **map;
    char player_start;
    t_vector player_start_indx;
    int map_W; // width
    int map_H; // height
} t_map;

typedef struct  s_player
{
    t_vector position;
    t_vector direction;
    t_vector plane;
} t_player;

typedef struct  s_game
{
    void *mlx;
    void *win;
    t_map *map;
    t_player *player;

} t_game;

int map_init(char *map_name, t_map *map);
int load_textures(int fd, t_map *map);
int print_err(char *str);
int map_check(t_map *map);
//int init_texture(char *line, t_map *map);
int print_map(t_map *map); // SİLİNECEK


#endif