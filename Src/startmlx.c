/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   startmlx.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 14:21:52 by mmaevani          #+#    #+#             */
/*   Updated: 2024/06/27 17:31:53 by mmaevani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "m_basic.h"

void	start_mlx()
{
	// TO DO 
	void	*mlx;
	void	*mlx_win;

	mlx= mlx_init(); // init
	mlx_win = mlx_new_window(mlx, WINDOW_W, WINDOW_H, "Hello world!");
	mlx_loop(mlx);
}