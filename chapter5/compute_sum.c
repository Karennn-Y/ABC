/* In file name compute_sum.c */

#include <stdio.h>

int compute_sum(int n);

int main(void)
{
	int n = 3, sum;

	printf("%d\n", n);         /* 3 is printed */
	sum = compute_sum(n);
	printf("%d\n", n);         /* 3 is printed */
	printf("%d\n", sum);       /* 6 is printed */
	return 0;
}

int compute_sum(int n)
{
	int sum = 0;

	for ( ; n > 0; --n)
		sum += n;
	return sum;
}
