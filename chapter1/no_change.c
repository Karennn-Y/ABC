/* In file no_change.c */

#include <stdio.h>

void try_to_change_it(int);

int main(int argc, char **argv)
{
	int a = 1;				/* 1 is printed */
	
	printf("%d\n", a);
	try_to_change_it(a);	/* 1 is printed again! */
	printf("%d\n", a);
	return 0;
}

void try_to_change_it(int a)
{
	a = 777;
}
