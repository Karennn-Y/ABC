/* In file double_out.c */

#include <stdio.h>

int main(int argc, char **argv)
{
	int c;
	while ((c = getchar()) != EOF) {
		putchar(c);
		putchar(c);
	}
	return 0;
}
