/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   image_put.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 10:49:14 by ytouate           #+#    #+#             */
/*   Updated: 2022/03/10 17:53:21 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	put_collectable(t_mlx_utils utils, t_map a)
{
	t_list *pos = get_c_pos(a.rows, a.map, 'C');
	while (pos->next)
	{
		mlx_put_image_to_window(utils.mlx, utils.window, utils.collectable, pos->x_cor, pos->y_cor);
		pos = pos->next;
	}
}

void put_exit(t_mlx_utils utils, t_map a)
{
	t_list *pos = get_c_pos(a.rows, a.map,'E');
	while (pos->next)
	{
		mlx_put_image_to_window(utils.mlx, utils.window, utils.map_exit, pos->x_cor, pos->y_cor);
		pos = pos->next;
	}
}

void put_wall(t_mlx_utils utils, t_map a)
{
	t_list *pos = get_c_pos(a.rows, a.map, '1');
	while (pos->next)
	{
		mlx_put_image_to_window(utils.mlx, utils.window, utils.wall, pos->x_cor, pos->y_cor);
		pos = pos->next;
	}
}

void put_land(t_mlx_utils utils, t_map a)
{
	int	x_cor;
	int	y_cor;
	int	i;
	int	j;

	i = 0;
	j = 0;
	x_cor = 0;
	y_cor = 0;
	while (i < a.rows - 1)
	{
		j = 0;
		x_cor = 0;
		while (a.map[i][j] != '\n' && a.map[i][j] != '\0')
		{
			mlx_put_image_to_window(utils.mlx, utils.window, utils.land, x_cor, y_cor);
			x_cor += 50;
			j++;
		}
		i++;
		y_cor += 50;
	}
}

void put_player(t_mlx_utils utils, t_map a)
{
	t_list *pos = get_c_pos(a.rows, a.map, 'P');
	while (pos->next)
	{
		mlx_put_image_to_window(utils.mlx, utils.window, utils.player, pos->x_cor, pos->y_cor);
		pos = pos -> next;
	}
}
