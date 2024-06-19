/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 11:25:18 by mmaevani          #+#    #+#             */
/*   Updated: 2024/02/27 10:02:23 by mmaevani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	lens2;

	lens2 = ft_strlen(s2);
	if (lens2 == 0)
		return ((char *)s1);
	if (s1[0] == '\0')
		return (0);
	if (len <= 0)
		return (0);
	while (len > 0)
	{
		if (*s1 == '\0' || len < lens2)
			return (0);
		if (ft_strncmp(s1, s2, lens2) == 0)
		{
			return ((char *)s1);
		}
		len--;
		s1++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("%s\n", ft_strnstr("abcdefgh", "abc", 3));
}*/
