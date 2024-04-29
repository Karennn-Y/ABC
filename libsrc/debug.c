//
// Description : Debug function
// File Name   : debug.c
// Date        : 2023. 07. 15. (토) 18:13:27 KST
// By  : Karen
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <time.h>
#include <unistd.h>

////////////////////////////////////////////////////////////////////////////////
// Debug function
// Prototype : void _Logout
//              (char *fname,char *func,int line,const char *fmt, ...)
// Arguments : fname : file name
//             func  : function name
//             line  : line number
//             fmt   : format for printing message
// Return    : void
////////////////////////////////////////////////////////////////////////////////
void _Logout(const char *fname, const char *func, int line, const char *fmt, ...)
{
va_list ap;
char buff[5120], tmp[512];
register char *p;
time_t  tl;
struct timespec tv;

	memset(buff, 0x00, 5120);
	clock_gettime(CLOCK_REALTIME, &tv);
	strftime(buff , 20, "[%H:%M:%S:", localtime(&tv.tv_sec));
	sprintf(buff + 10, "%0d]- ", (int)(tv.tv_nsec/1000000));

	va_start(ap, fmt);
	vsprintf(buff + 15, fmt, ap);
	va_end(ap);

	if(*(buff + strlen(buff) - 1) == '\n') *(buff + strlen(buff)-1) = 0x00;
	printf("%.*s", (int)strlen(buff),buff);

	printf(" (%s:%s-%d)\n", fname, func, line);

    return ;
}
