/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <mmaevani@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:03:53 by mmaevani          #+#    #+#             */
/*   Updated: 2024/08/15 07:25:18 by mmaevani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	char			*p;
	unsigned char	d;
	unsigned int	i;

	p = (char *)s;
	i = 0;
	d = c;
	while (p[i] != '\0')
	{
		if ((unsigned char)p[i] == d)
			return (p + i);
		else
			i++;
	}
	if (p[i] == d)
		return (p + i);
	else
		return (NULL);
}
