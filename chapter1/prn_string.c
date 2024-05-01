/* print string */

#include <stdio.h>
#include <string.h>

#define MAXSTRING 100

void prn_string(char *);

int main(int argc, char **argv)
{
	char   s1[MAXSTRING], s2[MAXSTRING];
	strcpy(s1, "Mary, Mary, quite contrary, \n");
	strcpy(s2, "how does your garden grow?\n");
	prn_string(s1);
	prn_string(s2);
	strcat(s1, s2);       /* concatenate the strings */
	prn_string(s1);

	return 0;
}

void prn_string(char *str)
{
	int idx = 0;

	while (str[idx] != '\0') {
		printf("%c", str[idx]);
		idx++;
	}
}
