/* In file main.c */

#include "hanoi.h"

int cnt = 0;      /* count of the number of moves */

int main(int argc, char **argv)
{
	int n;
	n = get_n_from_user();
	assert(n > 0);
	/*
	// Move n disks from tower A to tower C,
	// using tower B as an intermediate tower
	*/
	move(n, 'A', 'B', 'C');      /* recursive fct */
	return 0;
}
