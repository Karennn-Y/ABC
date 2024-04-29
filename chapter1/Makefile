INCLUDE = -I../include
LIB_PATH = -L../lib
LIBS = -lmylib
TARGET = abc cnt_letters consecutive_sums for_loop marathon maxmin next_age nice_day\
no_change pacific_sea read_it running_sum scan_function scores sea sea1 sea2 seashore\
seashore2 seashore3 square test5 uppercase_c uppercase_i

.c.o :
	cc -c $*.c $(INCLUDE)

all : $(TARGET)

abc : abc.o
	cc -o abc abc.o $(LIB_PATH) $(LIBS)

cnt_letters : cnt_letters.o
	cc -o cnt_letters cnt_letters.o $(LIB_PATH) $(LIBS)

consecutive_sums : consecutive_sums.o
	cc -o consecutive_sums consecutive_sums.o $(LIB_PATH) $(LIBS)

for_loop : for_loop.o
	cc -o for_loop for_loop.o $(LIB_PATH) $(LIBS)

marathon : marathon.o
	cc -o marathon marathon.o $(LIB_PATH) $(LIBS)

maxmin : maxmin.o
	cc -o maxmin maxmin.o $(LIB_PATH) $(LIBS)

next_age : next_age.o
	cc -o next_age next_age.o $(LIB_PATH) $(LIBS)

nice_day : nice_day.o
	cc -o nice_day nice_day.o $(LIB_PATH) $(LIBS)

no_change : no_change.o
	cc -o no_change no_change.o $(LIB_PATH) $(LIBS)

pacific_sea : pacific_sea.o
	cc -o pacific_sea pacific_sea.o $(LIB_PATH) $(LIBS)

read_it :read_it.o
	cc -o read_it read_it.o $(LIB_PATH) $(LIBS)

running_sum : running_sum.o
	cc -o running_sum running_sum.o $(LIB_PATH) $(LIBS)

scan_function : scan_function.o
	cc -o scan_function scan_function.o $(LIB_PATH) $(LIBS)

scores : scores.o
	cc -o scores scores.o $(LIB_PATH) $(LIBS)

sea : sea.o
	cc -o sea sea.o $(LIB_PATH) $(LIBS)

sea1 : sea1.o
	cc -o sea1 sea1.o $(LIB_PATH) $(LIBS)

sea2 : sea2.o
	cc -o sea2 sea2.o $(LIB_PATH) $(LIBS)

seashore : seashore.o
	cc -o seashore seashore.o $(LIB_PATH) $(LIBS)

seashore2 : seashore2.o
	cc -o seashore2 seashore2.o $(LIB_PATH) $(LIBS)

seashore3 : seashore3.o
	cc -o seashore3 seashore3.o $(LIB_PATH) $(LIBS)

square :square.o
	cc -o square square.o $(LIB_PATH) $(LIBS)

test5 : test5.o
	cc -o test5 test5.o $(LIB_PATH) $(LIBS)

uppercase_c : uppercase_c.o
	cc -o uppercase_c uppercase_c.o $(LIB_PATH) $(LIBS)

uppercase_i : uppercase_i.o 
	cc -o uppercase_i uppercase_i.o $(LIB_PATH) $(LIBS)

clean :
	rm -f *.o
	rm -f $(TARGET)
