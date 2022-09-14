#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints from any integer to 98
 * @x: integer input
 *
 * Return: void
 */

void print_to_98(int x)
{
while (x != 98)
{
printf("%i, ", x);
if (x > 98)
x--;
else
x++;
}
printf("98\n");
}
