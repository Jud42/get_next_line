/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 13:55:54 by rmamison          #+#    #+#             */
/*   Updated: 2021/12/04 18:20:38 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#define BUFFER_SIZE 500
int main()
{
  int	fd;
  int	ret;
  char	*p;
  char	*p2;
  char	*p3;

  fd = open("test.c", O_RDONLY);
  if (fd < 0 || BUFFER_SIZE <= 0)
	  return (0);
  p = malloc (sizeof(char) * (BUFFER_SIZE + 1));
  if (!p)
	  return (0);
  ret = BUFFER_SIZE;
  while (ret > 0)
  {
	ret = read(fd, p, BUFFER_SIZE);
	printf("%s\n", p);	
  }
  printf("%d\n", fd);

	fd = open("a.c", O_RDONLY);
  if (fd < 0 || BUFFER_SIZE <= 0)
	  return (0);
  p2 = malloc (sizeof(char) * (BUFFER_SIZE + 1));
  if (!p2)
	  return (0);
  ret = BUFFER_SIZE;
  while (ret > 0)
  {
	ret = read(fd, p2, BUFFER_SIZE);
	printf("%s\n", p2);	
  }
  printf("%d\n", fd);

 fd = open("b.c", O_RDONLY);
  if (fd < 0 || BUFFER_SIZE <= 0)
	  return (0);
  p3 = malloc (sizeof(char) * (BUFFER_SIZE + 1));
  if (!p)
	  return (0);
  ret = BUFFER_SIZE;
  while (ret > 0)
  {
	ret = read(fd, p3, BUFFER_SIZE);
	printf("%s\n", p3);	
  }
  printf("%d\n", fd);

 	free(p);
	free(p2);
	free(p3);
  return 0;
  }
