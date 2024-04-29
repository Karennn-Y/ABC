/* In file read_it.c */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main(int argc, char *argv[]) 
{
	int c, rtn;
	FILE *ifp;
	char buffer[1024], type;
	
	printf("Input type (r, w, a) : \n");
	scanf("%c", &type);
	
	
	switch(type) {
		case 'r':
			ifp = fopen("my_file", "r");
			if (ifp == NULL) {
				printf("my_file does not exist!\n");
				printf("%s\n", strerror(errno));
				exit(0);
			}
			while (fgets(buffer, 1024, ifp) != NULL) {
				printf("%s", buffer);
			}
			fclose(ifp);
			break;
		case 'w':
			ifp = fopen("my_file", "w");
			fprintf(ifp, "Hello!!!!!!\n");
			fclose(ifp);
			break;
		case 'a':
			ifp = fopen("my_file", "a");
			fprintf(ifp, "Hello!!!!!\n");
			fclose(ifp);
			break;
		default :
			printf("Option error\n");
			printf("Option -> 'r' 'w' 'a' \n");
			exit(0);
	}
	return 0;
}
