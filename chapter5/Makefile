INCLUDE = -I../include
LIB_PATH = -L../lib
LIBS = -lmylib
TARGET = power compute_sum wrt_bkwrds move

.c.o : 
	cc -c $*.c $(INCLUDE)

all : $(TARGET)

power : power.o
	cc -o power power.o $(LIB_PATH) $(LIBS)

compute_sum : compute_sum.o
	cc -o compute_sum compute_sum.o $(LIB_PATH) $(LIBS)

wrt_bkwrds : wrt_bkwrds.o
	cc -o wrt_bkwrds wrt_bkwrds.o $(LIB_PATH) $(LIBS)

move : main.o move.o get.o
	cc -o move main.o move.o get.o $(LIB_PATH) $(LIBS)

clean : 
	rm -f *.o
	rm -f $(TARGET)
