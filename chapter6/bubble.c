/* In file name bubble.c */

#include <stdio.h>

void swap(int *, int *);
void print_table(int a[], int n);

void bubble(int a[], int n)
{
	int i, j;
	
	printf("%s", "정렬되지 않은 자료 :");
	
	print_table(a, n);

	for (i = 0; i < n - 1; i++) {
		for (j = n - 1; j > i; j--) {
			if (a[j - 1] > a[j])
				swap(&a[j - 1], &a[j]);
		}
		printf("%8d %s", i + 1, "번째 단계 :");
		print_table(a, n);
	}
}
