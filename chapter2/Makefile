INCLUDE = -I../include
LIB_PATH = -L../lib
LIBS = -lmylib
TARGET = prn_rand sum

.c.o : 
	cc -c $*.c $(INCLUDE)

all : $(TARGET)

prn_rand : prn_rand.o
	cc -o prn_rand prn_rand.o $(LIB_PATH) $(LIBS)

sum : sum.o
	cc -o sum sum.o $(LIB_PATH) $(LIBS)

clean : 
	rm -f *.o
	rm -f $(TARGET)
