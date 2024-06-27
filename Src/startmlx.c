/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   startmlx.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 14:21:52 by mmaevani          #+#    #+#             */
/*   Updated: 2024/06/27 16:54:33 by mmaevani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "m_basic.h"

void	start_mlx()
{
	// TO DO 
	void	*mlx;
	void	*mlx_win;

	mlx= mlx_init(); // init
	mlx_win = mlx_new_window(mlx, 1920, 1080, "Hello world!");
	if (mlx_win)
		ft_printf("window created\n");
	mlx_loop(mlx);
}