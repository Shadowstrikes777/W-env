/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_basic.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 14:06:55 by mmaevani          #+#    #+#             */
/*   Updated: 2024/06/27 16:50:24 by mmaevani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MLX_BASICS_H
# define MLX_BASICS_H
# include "mlx.h"
# include "libft.h"
# include <X11/X.h>
# include <X11/keysym.h>
# include <math.h>
# define WINDOW_W 400
# define WINDOW_H 300

typedef struct s_pos
{
	int	x;
	int	y;
}	t_pos;
void	start_mlx();

#endif