/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_basic.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 14:06:55 by mmaevani          #+#    #+#             */
/*   Updated: 2024/06/27 17:42:27 by mmaevani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MLX_BASICS_H
# define MLX_BASICS_H
# include "mlx.h"
# include "libft.h"
# include <X11/X.h>
# include <X11/keysym.h>
# include <math.h>
# ifndef WINDOW_W
#  define WINDOW_W 400
# endif
# ifndef WINDOW_H
#  define WINDOW_H 600
# endif

typedef struct s_pos
{
	int	x;
	int	y;
}	t_pos;

typedef struct	s_data {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}				t_data;

typedef struct s_mlx {
	void	*mlx;
	void	*win;
}	t_mlx;

void	my_mlx_pixel_put(t_data *data, int x, int y, int color);
void	start_mlx();

#endif