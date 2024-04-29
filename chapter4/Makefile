INCLUDE = -I../include
LIB_PATH = -L../lib
LIBS = -lmylib
TARGET = cnt_char bool_val loop fibonacci

.c.o : 
	cc -c $*.c $(INCLUDE)

all : $(TARGET)

cnt_char : cnt_char.o
	cc -o cnt_char cnt_char.o $(LIB_PATH) $(LIBS)

bool_val : bool_val.o
	cc -o bool_val bool_val.o $(LIB_PATH) $(LIBS)

loop : loop.o
	cc -o loop loop.o $(LIB_PATH) $(LIBS)

fibonacci : fibonacci.o
	cc -o fibonacci fibonacci.o $(LIB_PATH) $(LIBS)

clean : 
	rm -f *.o
	rm -f $(TARGET)
