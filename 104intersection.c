/*
** 104intersection.c for 104intersection in /home/VEYSSI_B/rendu/104intersection
**
** Made by Baptiste veyssiere
** Login   <VEYSSI_B@epitech.net>
**
** Started on  Mon Dec 14 14:40:43 2015 Baptiste veyssiere
** Last update Mon Dec 14 15:24:22 2015 Baptiste veyssiere
*/

#include "proto.h"

int	main(int ac, char **av)
{
  t_coord	p;
  t_coord	v;

  if (ac != 9)
    return (84);
  p.x = atof(av[2]);
  p.y =atof(av[3]);
  p.z =atof(av[4]);
  v.x =atof(av[5]);
  v.y =atof(av[6]);
  v.z =atof(av[7]);
  check(atoi(av[1]), p, v, atof(av[8]));
  return (0);
}
