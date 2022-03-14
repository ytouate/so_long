/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   norm_funcs_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 06:56:14 by ytouate           #+#    #+#             */
/*   Updated: 2022/03/14 07:41:06 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	end_game(t_boarders b, t_list *pos)
{
	ft_free(b, pos);
	exit(EXIT_SUCCESS);
}

void	game_over(void)
{
	write (1, "You touched the trap GAME OVER\n", 32);
	exit(EXIT_FAILURE);
}
