/*tion makefile
 * Name : genmake.c
 * Date : 1996.11.11
 * By   : PentaSoft Co.,Ltd.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
void TypeDir(fp)
FILE *fp;
{
	fprintf(fp, "SUBDIRS =\n");
	fprintf(fp, "MAKE    = make\n");
	fprintf(fp, "all:\n");
	fprintf(fp, "\t@for i in $(SUBDIRS); do (cd ./$$i && echo $$i: && $(MAKE) $@) done || exit 1\n\n");
	fprintf(fp, "clean:\n");
	fprintf(fp, "\t@for i in $(SUBDIRS); do (cd ./$$i && echo $$i: && $(MAKE) $@) done || exit 1\n\n");
	fprintf(fp, "compress :\n");
	fprintf(fp, "\t@for i in $(SUBDIRS); do (cd ./$$i && echo $$i: && $(MAKE) $@) done || exit 1\n");
	fprintf(fp, "\t@rm -f ./lib/*.a\n");
	fprintf(fp, "\t@tar -cvf ../back.tar ./\n\n");
}
void TypeLib(fp)
FILE *fp;
{
	fprintf(fp, "\n\n");
	fprintf(fp, "LD_HOME         = $(HOME)\n");
	fprintf(fp, "CC              = icc\n");
	fprintf(fp, "AR              = ar\n");
	fprintf(fp, "#SYSTEM_INCL     = -I/tim/tibco/ftl/2.0/include\n");
	fprintf(fp, "SYSTEM_INCL     = \n");
	fprintf(fp, "COMMON_INCL     = -I$(LD_HOME)/include\n");
	fprintf(fp, "LOCAL_INCL      =\n");
	fprintf(fp,
	"INCLUDE         = $(LOCAL_INCL) $(COMMON_INCL) $(SYSTEM_INCL)\n");
	fprintf(fp, "SUBDIRS= sample\n");
	fprintf(fp,"\n\n");
	fprintf(fp, "LIBNAME         =$(LD_HOME)/lib/\n\n");

	fprintf(fp, 
	"#CFLAGS          = -O3 -no-prec-div -static -xHost -g -c $(INCLUDE)\n");
	fprintf(fp, 
		"CFLAGS          = -O3 -g -c $(INCLUDE)\n");
	fprintf(fp, "ARFLAGS         = -ruv\n\n");
	fprintf(fp, ".SUFFIXES       : .cc .c .o .cp\n\n");
	fprintf(fp, ".c.o            :\n");
	fprintf(fp, "\t$(CC) $(CFLAGS) $*.c\n\n");
	fprintf(fp, ".cc.o            :\n");
	fprintf(fp, "\t$(CC) $(CFLAGS) $*.cc\n\n");
	fprintf(fp, "# OBJS list\n");
	fprintf(fp, "OBJS            =\n\n");
	fprintf(fp, "lib             : $(OBJS)\n");
	fprintf(fp, "\t$(AR) $(ARFLAGS) $(LIBNAME) $(OBJS)\n\n");
	fprintf(fp, "clean           :\n");
	fprintf(fp, "\t@for i in $(SUBDIRS); do (cd ./$$i && echo $$i: && $(MAKE) $@) done || exit 1\n\n");
	fprintf(fp, "\t rm -f *.o core\n");
}
void TypeSub(fp)
FILE *fp;
{
	fprintf(fp, "\n\n");
	fprintf(fp, "LD_HOME         = $(HOME)\n");
	fprintf(fp, "CC              = icc\n");
	fprintf(fp, "UIL             = uil\n");
	fprintf(fp, "PROC            = \n");
	fprintf(fp,
	"#FTL_INCL        = -I/tim/tibco/ftl/2.0/include\n");
	fprintf(fp,
	"COMMON_INCL     = -I$(LD_HOME)/cominclude\n");
	fprintf(fp,
	"LOCAL_INCL      = -I$(LD_HOME)/include\n");
	fprintf(fp,
	"INCLUDE         = $(LOCAL_INCL) $(COMMON_INCL) $(FTL_INCL)\n");
	fprintf(fp,"\n");
	fprintf(fp, "#FTL_LIB_PATH    = -L/tim/tibco/ftl/2.0/lib\n"); 
	fprintf(fp, "COMMON_LIB_PATH = -L$(LD_HOME)/comlib\n");
	fprintf(fp, "LOCAL_LIB_PATH  = -L$(LD_HOME)/lib\n");
	fprintf(fp,
	"LIB_PATH        = $(COMMON_LIB_PATH) $(LOCAL_LIB_PATH) $(FTL_LIB_PATH)\n\n");
	fprintf(fp, 
	"#CFLAGS          = -O3 -no-prec-div -static -xHost -g -c $(INCLUDE)\n");
	fprintf(fp, 
	"CFLAGS          = -O3 -g -c $(INCLUDE)\n");
	fprintf(fp, "PROCFLAGS       =\n");

	fprintf(fp, "#FTL_LIBS        = -ltib -ltibutil -ltibgroup\n");
	fprintf(fp, "COMMON_LIBS     =\n");
	fprintf(fp, "LOCAL_LIBS      =\n");
	fprintf(fp, "LIBS            = ");
	fprintf(fp, "$(LOCAL_LIBS) $(COMMON_LIBS) $(RDB_LIBS) $(FTL_LIBS)\n\n");
	fprintf(fp, "\nSUBDIRS=\n\n");
	fprintf(fp, ".SUFFIXES       : .cc .c .o .pc .uil .uid\n\n");
/* ORACLE PC */
	fprintf(fp, ".pc.c	:\n");
	fprintf(fp, "\t$(PROC) $(PROCFLAGS) iname=$*\n");
	fprintf(fp, ".pc.o	:\n");
	fprintf(fp, "\t$(PROC) $(PROCFLAGS) iname=$*\n");
	fprintf(fp, "\t$(CC) $(CFLAGS) $*.cc\n");
	fprintf(fp, ".c.o            :\n");
	fprintf(fp, "\t$(CC) $(CFLAGS) $*.c\n");
	fprintf(fp, ".cc.o            :\n");
	fprintf(fp, "\t$(CC) $(CFLAGS) $*.cc\n");
	fprintf(fp, ".uil.uid        :\n");
	fprintf(fp, "\t$(UIL) -o $*.uid $*.uil\n\n");

  fprintf(fp, "TARGET         = \n");
  fprintf(fp, "OBJS           = \n\n");
  fprintf(fp, "all  :  $(TARGET)\n\n");
  fprintf(fp, "$(TARGET) : $(OBJS)\n");
  fprintf(fp, "\t$(CC) -o $@ $@.o $(LIB_PATH) $(LIBS)\n\n");

  fprintf(fp, "install : $(TARGET)\n");
  fprintf(fp, "\t@strip $(TARGET)\n");
  fprintf(fp, "\tcp $(TARGET) $(LD_HOME)/bin\n\tmake clean\n\n");
  fprintf(fp, "clean           :\n");
	fprintf(fp, "\t rm -f $(TARGET) *.o core\n");
}
void main(argc, argv)
int argc;
char **argv;
{
FILE *fp;
int   fg = 0, type;
char buff[255];
time_t tl;
	if(argc != 2){
		printf("Using    : genmake <1:DIR_type, 2:SUB_type, 3:LIB_type>\n");
		exit(0);
	}
	type = atoi(argv[1]);
	if(type != 1 && type != 2 && type != 3){
		printf("Using    : genmake <1:DIR_type, 2:SUB_type, 3:LIB_type>\n");
		exit(0);
	}
	fp = fopen("Makefile", "rt");
	if(fp){
		fclose(fp);
		system("mv Makefile Makefile.old");
		fg = 1;
	}
	fp = fopen("Makefile", "wt");
	memset(buff, 0x00, 255);
	time(&tl);
	strftime(buff, 30, "%Y.%m.%d", localtime(&tl));
	fprintf(fp,
"#\n# Generated By \"genmake\"\n# Date : %s\n# YJYOON\n#\n",
	buff);
	switch(type){
		case 1 : TypeDir(fp); break;
		case 2 : TypeSub(fp); break;
		case 3 : TypeLib(fp); break;
	}
	fclose(fp);
	if(fg)
		printf("Move \"Makefile\" to \"Makefile.old\"\n");
	printf("Create Makefile Ok!\n");
}

