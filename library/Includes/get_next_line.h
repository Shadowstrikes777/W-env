/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaevani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 18:15:41 by mmaevani          #+#    #+#             */
/*   Updated: 2024/04/29 09:28:48 by mmaevani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 50
# endif
# include <stdlib.h>
# include <unistd.h>

char		*ft_strjoin(const char *s1, const char *s2);
size_t		ft_strlcpy(char *dst, const char *src, size_t size);
char		*ft_strdup(const char *s);
size_t		gnl_strlen(const char *s);
char		*ft_substr(const char *s, unsigned int start, size_t len);
char		*get_next_line(int fd);
#endif
