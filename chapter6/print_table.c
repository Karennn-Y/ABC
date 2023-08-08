/* In file name print_table.c */

#include <stdio.h>

void print_table(int a[], int n)
{
	for(int i = 0; i < n; i++) {
		printf(" %5d", a[i]);
	}
	printf("\n");
}
