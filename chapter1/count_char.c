/* count characters */

#include <stdio.h>

int main(int argc, char **argv)
{
	int cnt;
/*	cnt = printf("abc abc");     */   // 7
/*	cnt = printf("abc\nabc \n"); */   // 9
	cnt = printf("abc\0abc\0");       // 3
	printf("\nNo. of characters printed : %d\n", cnt);
}
