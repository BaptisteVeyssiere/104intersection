/*
** check.c for 104intersection in /home/VEYSSI_B/rendu/104intersection
**
** Made by Baptiste veyssiere
** Login   <VEYSSI_B@epitech.net>
**
** Started on  Mon Dec 14 14:42:35 2015 Baptiste veyssiere
** Last update Mon Dec 14 15:55:28 2015 Baptiste veyssiere
*/

#include "proto.h"

void	sphere(int type, t_coord p, t_coord v, double radius)
{
  double	A;
  double	B;
  double	C;
  double	delta;
  double	lambda;

  printf("sphere of radius %.3g\n", radius);
  printf("straight line going through the (%.3g,%.3g,%.3g) point and of direction vector (%.3g,%.3g,%.3g)\n", p.x, p.y, p.z, v.x, v.y,v.z);
  A = SQUARE(v.x) + SQUARE(v.y) + SQUARE(v.z);
  B = 2 * (v.x * p.x + p.y * v.y + p.z * v.z);
  C = SQUARE(p.x) + SQUARE(p.y) + SQUARE(p.z) - SQUARE(radius);
  delta = SQUARE(B) - 4 * A * C;
  if (A == 0 && B == 0 && C == 0)
    printf("There is an infinite number of intersection points.\n");
  else if (delta == 0)
    {
      printf("1 intersection point:\n");
      lambda = -B / (2 * A);
      printf("(%.3f,%.3f,%.3f)\n", p.x + lambda * v.x, p.y + lambda * v.y, p.z + lambda * v.z);
    }
  else if (delta < 0)
    printf("No intersection point.\n");
  else if (delta > 0)
    {
      printf("2 intersection points:\n");
      lambda = (-B + sqrt(delta)) / (2 * A);
      printf("(%.3f,%.3f,%.3f)\n", p.x + lambda * v.x, p.y + lambda * v.y, p.z + lambda * v.z);
      lambda = (-B - sqrt(delta)) / (2 * A);
      printf("(%.3f,%.3f,%.3f)\n", p.x + lambda * v.x, p.y + lambda * v.y, p.z + lambda * v.z);
    }
}

void	cylindre(int type, t_coord p, t_coord v, double radius)
{
  double	A;
  double	B;
  double	C;
  double	delta;
  double	lambda;

  printf("cylinder of radius %.3g\n", radius);
  printf("straight line going through the (%.3g,%.3g,%.3g) point and of direction vector (%.3g,%.3g,%.3g)\n", p.x, p.y, p.z, v.x, v.y, v.z);
  A = SQUARE(v.x) + SQUARE(v.y);
  B = 2 * (v.x * p.x + v.y * p.y);
  C = SQUARE(p.x) + SQUARE(p.y) - SQUARE(radius);
  delta = SQUARE(B) - 4 * A * C;
  if (A == 0 && B == 0 && C == 0)
    printf("There is an infinite number of intersection points.\n");
  else if (delta == 0)
    {
      printf("1 intersection point:\n");
      lambda = -B / (2 * A);
      printf("(%.3f,%.3f,%.3f)\n", p.x + lambda * v.x, p.y + lambda * v.y, p.z + lambda * v.z);
    }
  else if (delta < 0)
    printf("No intersection point.\n");
  else if (delta > 0)
    {
      printf("2 intersection points:\n");
      lambda = (-B + sqrt(delta)) / (2 * A);
      printf("(%.3f,%.3f,%.3f)\n", p.x + lambda * v.x, p.y + lambda * v.y, p.z + lambda * v.z);
      lambda = (-B - sqrt(delta)) / (2 * A);
      printf("(%.3f,%.3f,%.3f)\n", p.x + lambda * v.x, p.y + lambda * v.y, p.z + lambda * v.z);
    }
}

void	cone(int type, t_coord p, t_coord v, double angle)
{
  double	A;
  double	B;
  double	C;
  double	delta;
  double	lambda;

  printf("cone of %.3g degree angle\n", angle);
  printf("straight line going through the (%.3g,%.3g,%.3g) point and of direction vector (%.3g,%.3g,%.3g)\n", p.x, p.y, p.z, v.x, v.y,v.z);
  A = SQUARE(v.x) + SQUARE(v.y) - SQUARE(v.z) / SQUARE(tan(angle));
  B = 2 * (v.x * p.x + v.y * p.y - (1 / SQUARE(tan(angle))) * v.z * p.z);
  C = SQUARE(p.x) + SQUARE(p.y) - SQUARE(p.z) / SQUARE(tan(angle));
  delta = SQUARE(B) - 4 * A * C;
  if (A == 0 && B == 0 && C == 0)
    printf("There is an infinite number of intersection points.\n");
  else if (delta == 0)
    {
      printf("1 intersection point:\n");
      lambda = -B / (2 * A);
      printf("(%.3f,%.3f,%.3f)\n", p.x + lambda * v.x, p.y + lambda * v.y, p.z + lambda * v.z);
    }
  else if (delta < 0)
    printf("No intersection point.\n");
  else if (delta > 0)
    {
      printf("2 intersection points:\n");
      lambda = (-B + sqrt(delta)) / (2 * A);
      printf("(%.3f,%.3f,%.3f)\n", p.x + lambda * v.x, p.y + lambda * v.y, p.z + lambda * v.z);
      lambda = (-B - sqrt(delta)) / (2 * A);
      printf("(%.3f,%.3f,%.3f)\n", p.x + lambda * v.x, p.y + lambda * v.y, p.z + lambda * v.z);
    }
}

void	check(int type, t_coord p, t_coord v, double radius)
{
  if (type == 1)
    sphere(type, p, v, radius);
  else if (type == 2)
    cylindre(type, p, v, radius);
  else if (type == 3)
    cone(type, p, v, radius);
}
