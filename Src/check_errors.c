/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 14:35:56 by mmaevani          #+#    #+#             */
/*   Updated: 2024/06/27 16:52:03 by mmaevani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	check_errors(int argc, char **argv)
{
	if (argc != 2 || argc != 4)
	{
		ft_printf("not enough/too much arguments provided.\n");
		exit(EXIT_FAILURE);
	}
	else if ((argc == 2 && ft_strncmp("mandelbrot", argv[1], 10))
			|| (argc == 4 && ft_strncmp("julia", argv[1], 5)))
	{
		ft_printf("Wrong arguments.\n\tpossible options :\n\t ./fractol julia [] [] or ./fractol mandelbrot\n");
		exit(EXIT_FAILURE);
	}
}
