/* In file cnt_letters.c */
/* Count uppercase letters in a file. */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int c, i, letter[26];
	FILE *ifp, *ofp;

	if (argc != 3) {
		printf("\n%s%s%s\n\n%s\n%s\n\n",
			"Usage : ", argv[0], " infile out file",
			"The uppercase letters in infile will be counted.",
			"The result will be written in outfile.");
		exit(1);
	}
	ifp = fopen(argv[1], "r");
	ofp = fopen(argv[2], "w");
	for (i = 0; i < 26; i++)
		letter[i] = 0;
	while ((c = getc(ifp)) != EOF)
		if(c >= 'A' && c <= 'Z')
			++letter[c - 'A'];
		for (i = 0; i <26; ++i) {
			if (i % 6 == 0) 
				putc('\n', ofp);
			fprintf(ofp, "%c:%5d ", 'A' + i, letter[i]);
		}
		putc('\n', ofp);
		return 0;
}
