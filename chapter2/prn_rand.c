/* In file prn_rand.c */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int i, n;
	unsigned int seed;

	printf("\n%s\n%s",
		"Some randomly distributed integers will be printed.",
		"How many do you want to see? :  ");
	scanf("%d", &n);
	scanf("%d", &seed);
	srand(seed);

	for (i = 0; i < n; ++i) {
		if (i % 8 == 0) 
			putchar('\n');
		printf("%7d ", rand());
	}
	printf("\n\n");
	return 0;
}
