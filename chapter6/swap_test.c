/* In file name swap_test.c */

#include <stdio.h>

void swap(int *, int *);

int main (int argc, char **argv)
{
    int i = 3, j = 5;

    swap(&i, &j);
    printf("%d %d\n", i, j);

    return 0;
}
