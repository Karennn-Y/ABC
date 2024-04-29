/* In file next_age.c */

#include <stdio.h>

int main(int argc, char **argv)
{
	char name[1024];
	int age;

	printf("Type your name and age : \n");
	scanf("%s%d", name, &age);

	printf("Hello %s, next year you will be %d.\n", name, age + 1);
	return 0;
}
