/* In file name locate.c */
/* Printing an address, or location */

#include <stdio.h>

int main (int argc, char **argv)
{
	int i = 7, *p = &i;

	printf("%s%d\n%s%p\n",
	  "    Value of i: ", *p,
	  " Location of i: ", p);
	
	return 0;
}
