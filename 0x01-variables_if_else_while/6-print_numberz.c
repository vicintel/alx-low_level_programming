#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	
	while  (i < 10)
	{
		putchar(48 + i);
		i++;
	}
	putchar('\n');

	return (0);
}
