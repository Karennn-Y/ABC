INCLUDE = -I../include
LIB_PATH = -L../lib
LIBS = -lmylib
TARGET = locate swap_test bubble_test

.c.o : 
	cc -c $*.c $(INCLUDE)

all : $(TARGET)

locate : locate.o
	cc -o locate locate.o $(LIB_PATH) $(LIBS)

swap_test : swap_test.o swap.o
	cc -o swap_test swap_test.o swap.o $(LIB_PATH) $(LIBS)

bubble_test : bubble_test.o bubble.o swap.o print_table.o
	cc -o bubble_test bubble_test.o bubble.o swap.o print_table.o $(LIB_PATH) $(LIBS)

clean :
	rm -f *.o
	rm -f $(TARGET)
