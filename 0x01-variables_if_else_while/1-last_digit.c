#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int r;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	/* your code goes there */
	r = n % 10;
	if (r > 5)
	{
	    printf("Last digit of %i is %i and is greater than 5\n", n, r);
	}
	else if (r == 0)
	{
	    printf("Last digit of %i is %i and is 0\n", n, r);
	}
	else
	{
	    printf("Last digit of %i is %i and is less than 6 and not 0\n", n, r);
	}
	
	return (0);
}
Footer
© 2022 GitHub, Inc.
Footer navigation
Terms
Privacy
Security
Status

