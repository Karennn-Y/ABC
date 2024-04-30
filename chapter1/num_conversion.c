/* convert number */

#include <stdio.h>

int main(int argc, char **argv)
{
	int a1, a2, a3, cnt;

	printf("Input three integers : ");
	cnt = scanf("%d%d%d%d", &a1, &a2, &a3);
	printf("Number of successful conversion : %d\n", cnt);
}
