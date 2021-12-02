/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 10:51:33 by rmamison          #+#    #+#             */
/*   Updated: 2021/12/02 20:42:45 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFFER_SIZE 1000

# include <stddef.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

char  *ft_strjoin(char const *s1, char const *s2);
char  *ft_strchr(const char *s, int c);
char  *ft_lineLeft(char *str);
char  *ft_lineRight(char *str);
char  *pre_get_next_line(int fd, char *str);
char  *get_next_line(int fd);
int   ft_strlen(const char *s);

#endif
