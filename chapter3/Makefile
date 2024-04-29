INCLUDE = -I../include
LIB_PATH = -L../lib
LIBS = -lmylib
TARGET = capitalize double_out power_square size_of

.c.o :
	cc -c $*.c $(INCLUDE)

all : $(TARGET)

capitalize : capitalize.o
	cc -o capitalize capitalize.o $(LIB_PATH) $(LIBS)

double_out : double_out.o
	cc -o double_out double_out.o $(LIB_PATH) $(LIBS)

power_square : power_square.o
	cc -o power_square power_square.o $(LIB_PATH) $(LIBS)

size_of : size_of.o
	cc -o size_of size_of.o $(LIB_PATH) $(LIBS)

clean :
	rm -f *.o
	rm -f $(TARGET)
