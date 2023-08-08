/* In file name swap.c */

#include <stdio.h>

void swap (int *i, int *j)
{
	int tmp;

	tmp = *i;
	*i = *j;
	*j = tmp;
}
