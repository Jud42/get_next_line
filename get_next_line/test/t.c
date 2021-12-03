/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamison <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 13:55:54 by rmamison          #+#    #+#             */
/*   Updated: 2021/12/01 15:00:31 by rmamison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
char  *test(char *s, int *a)
{
  int j = 0;
  int i = 0;
  char *p;

  while(s[i] != '\n')
    i++;
  p = malloc (sizeof(char) * i + 1);
  i += 1;
 *a = i; 
  p = s;
  while(i > 0)
  {
    p[j] = s[j];
    j++;
    i--;
  }
  p[j] = '\0';
 return (p);
}

int main()
{
  char *p;
  int a = 5;
  char  o[] = "salut\nut";
  p = test(o, &a);
  printf("%s, %d", p, a);
  return 0;
  }
