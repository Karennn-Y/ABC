/* In name test5.c */

#include <stdio.h>

int main (int argc, char **argv) 
{
	double x, y = 0;

	x = 1 / 0;
	printf("x=%f\n", x);
	return 0;
}
