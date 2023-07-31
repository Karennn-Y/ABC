/* In file square.c */

#include <stdio.h>

int main(int argc, char **argv)
{
	int i;

	printf(":::::: A TABLE OF POWERS ::::::\n");
	printf("%7s%9s%12s%12s%12s\n",
		"Integer", "Square", "3rd power", "4th power", "5th power");
	printf("%7s%9s%12s%12s%12s\n",
		"-------", "------", "---------", "---------", "---------");
	for (i = 1; i < 4; i++) {
		printf("%7d%9d%12d%12d%12d\n",
			i, i * i, i * i * i, i * i * i * i, i * i * i * i * i); 
	}
	return 0;
}
