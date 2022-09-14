#include "main.h"

/**
 * print_last_digit - prints last digit of integer input
 * @x: integer to modify
 *
 * Return: a
 */


int print_last_digit(int x)
{
int a, b;

a = x % 10;
if (a <  0)
a = -a;
b = '0' + a;
_putchar(b);
 return (a);
}
