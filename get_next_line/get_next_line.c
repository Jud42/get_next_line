/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 09:50:15 by rmamison          #+#    #+#             */
/*   Updated: 2021/12/03 21:45:24 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* retourne la ligne qui vient d'etre lu,
 
 * return NULL si il n'ya rien a lire ou si il ya une erreur. ok ,
 
 * se rassurer que la fonction se comporte bien lorsqu'elle lis depuis un fichier et depuis le standard input,
 
 * compilation avec le flag -D BUFFER_SIZE=xx qui sera utiliser comme taille de tampon pour les appels de lecture dans get-next-line,
 
 * sera compiler this way => gcc -Wall -Wextra -Werror -D BUFFER_SIZE=42 <files>.c. ,
 
 * Vous devriez essayer de lire le moins possible chaque fois que get_next_line est appelé. Si vous rencontrez une nouvelle ligne, vous devez retourner la ligne actuelle. Ne lisez pas tout le fichier et ne traitez pas ensuite chaque ligne.
 
 * Important : La ligne renvoyée doit inclure le '\n', sauf si vous avez atteint
la fin du fichier et il n'y a pas de '\n'.
 
 * syntaxe  => read(fd, destbuf, BUFFER_SIZE(nbr octet a lire)) valeur de retour nbr d'octer
 trouver et  -1 si c'est erreur*/

#include "get_next_line.h"
/*
char  *pre_get_next_line(int fd, char *str)
{
  char *buf;
  int   ret;

  buf = malloc (sizeof(char) * (BUFFER_SIZE + 1));
  if (!buf)
    return (NULL);
  ret = 1;
  while (!ft_strchr(str, '\n') && ret != 0)
  {
    ret = read(fd, buf, BUFFER_SIZE);
    if (ret == -1)
    {
      free(buf);
        return (NULL);
    }
      buf[ret] = '\0';
      str = ft_strjoin(str ,buf); //concatenation
  }
  // free(buf);
  return (str);
}*/

char  *get_next_line(int fd);

int main()
{
  int ret = 60;
  int fd;
  static char *line;
  
  fd = open("test.c",O_RDONLY);
  if (fd == -1)
  {
    puts("open() error");
      return (1);
  }
  while(ret > 0)
  {
    line = get_next_line(fd);
    printf("tour de boucle \t => ");
    printf("%s\n", line);
    free(line);
    ret--;
  }
  if (close(fd) == -1)
  {
    puts("close() error");
    return (1);
  }
  return 0;
}

char  *get_next_line(int fd)
{
  static char *str;
  char        *line;

  if (fd < 0 || BUFFER_SIZE <= 0)
    return (0);
  str = pre_get_next_line(fd, str);
  if(!str)
    return (NULL);
  line = ft_lineLeft(str);
  str = ft_lineRight(str);
  return (line);
}

