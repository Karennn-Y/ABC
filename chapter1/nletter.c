#include <ctype.h>
#include <stdio.h>

#define MAXSTRING 100

int main(int argc, char **argv)
{
	char c, name[MAXSTRING];
    int i, cnt = 0, sum = 0;

    printf("\nHi! What is your name? ");
    for (i = 0; (c = getchar()) != '\n'; ++i) {
        name[i] = c;
        if (isalpha(c)) {
            sum += c;
			cnt++;
		}
    }
    name[i] = '\0';
    printf("\n%s%s%s\n%s",
        "Nice to meet you ", name, ".",
        "Your name spelled backwards is ");
    for (--i; i >= 0; --i)
        putchar(name[i]);
	
	printf("\n%s%d%s",
		"and the number of letters : ", cnt, ".");
    printf("\n%s%d%s\n\n%s\n",
        "and the letters in your name sum to ", sum, ".",
        "Have a nice day!");
    return 0;
}

