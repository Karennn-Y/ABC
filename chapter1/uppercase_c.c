/* In file uppercase_c.c */

#include <stdio.h>

#define BOTTOM_SPACE "\n\n\n\n\n"
#define BLANKS       "       " /* 7 blanks */
#define OFFSET 		 "               " /* 15 blanks */
#define TOP_SPACE    "\n\n\n\n\n"

int main (int argc, char **argv)
{
	printf(TOP_SPACE);
	printf(OFFSET "    CCCCCCC\n");
	printf(OFFSET "   CCCCCCCCC\n");
	printf(OFFSET "  CC" BLANKS "CC\n");
	printf(OFFSET " CC " BLANKS " CC\n");
	printf(OFFSET "CC  " BLANKS "  C\n");
	printf(OFFSET "CC  " BLANKS "  C\n");
	printf(OFFSET "CC\n" OFFSET "CC\n" OFFSET "CC\n");
	printf(OFFSET "CC  " BLANKS "  C\n");
	printf(OFFSET "CC  " BLANKS "  C\n");
	printf(OFFSET " CC " BLANKS " CC\n");
	printf(OFFSET "  CC" BLANKS "CC\n");
	printf(OFFSET "   CCCCCCCCC\n");
	printf(OFFSET "    CCCCCCC\n");
	printf(BOTTOM_SPACE);
	return 0;
}
